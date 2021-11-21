#include <stdio.h>
#include <stdint.h>
#include "common.h"
#include <main.h>

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
extern IWDG_HandleTypeDef hiwdg;


uint32_t rcOne = 0;

volatile uint32_t count = 0;
volatile int16_t count_1 = 0;

int32_t MotorPos = 0;



// FUNCTION      : CmdPWM
// DESCRIPTION   : This function initializes two timers. Timer 11 for time base generation and timer
//                 1 as PWM timer.
// PARAMETERS    : int mode
//         
// RETURNS       :CmdReturnOk is successfull
//  
ParserReturnVal_t CmdEncoder(int mode)
{

 if(mode != CMD_INTERACTIVE) return CmdReturnOk;
 
  __HAL_RCC_TIM1_CLK_ENABLE();
  HAL_NVIC_SetPriority(TIM3_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(TIM3_IRQn);
  TIM_OC_InitTypeDef sConfigOC = {0};
  
  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  
  TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = {0};

   // timer 1 initialization. Used as three channel PWM timer.
   
  htim2.Instance = TIM1;
  htim2.Init.Prescaler = 49;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 199;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.RepetitionCounter = 0;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  rcOne= HAL_TIM_Base_Init(&htim2);
   if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  rcOne = HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig);
  if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  rcOne = HAL_TIM_PWM_Init(&htim2) != HAL_OK;
  if(rcOne != HAL_OK)
   {
    printf("Error");
   }
  
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  rcOne = HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig);
  if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
  sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
  rcOne = HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_1);
  if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  
  rcOne = HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_2);
  if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  
  rcOne = HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_3);
  if(rcOne!= HAL_OK)
   {
    printf("Error");
   }
  
  sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
  sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
  sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
  sBreakDeadTimeConfig.DeadTime = 0;
  sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
  sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
  sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;
  rcOne = HAL_TIMEx_ConfigBreakDeadTime(&htim2, &sBreakDeadTimeConfig);
  if(rcOne!= HAL_OK)
  {
    printf("Error");
  }
  
  
  // TIM 3 configuration
   __HAL_RCC_TIM3_CLK_ENABLE();
  TIM_Encoder_InitTypeDef sConfig = {0};
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 0;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 65535;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  sConfig.EncoderMode = TIM_ENCODERMODE_TI12;
  sConfig.IC1Polarity = TIM_ICPOLARITY_FALLING;
  sConfig.IC1Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC1Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC1Filter = 0;
  sConfig.IC2Polarity = TIM_ICPOLARITY_FALLING;
  sConfig.IC2Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC2Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC2Filter = 0;
  if (HAL_TIM_Encoder_Init(&htim3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  
  // GPIO pin configuration 
  __HAL_RCC_GPIOA_CLK_ENABLE();
 // __HAL_RCC_GPIOB_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  
  /*TIM1 GPIO Configuration
  PA8     ------> TIM1_CH1
  PA9     ------> TIM1_CH2
  PA10     ------> TIM1_CH3
    */
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;   
  GPIO_InitStruct.Alternate = GPIO_AF1_TIM1;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
  
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_6|GPIO_PIN_7;  // encoder pin configuration
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF2_TIM3;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);  
 
   
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  HAL_TIM_Encoder_Start_IT(&htim3, TIM_CHANNEL_ALL);
  //HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_1);
  //HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);
  //HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);
 // TIM1->CCR1 = 30;
  return CmdReturnOk;
 
}

ADD_CMD("eci",CmdEncoder,"Encoder init")

ParserReturnVal_t CmdEncoder2(int mode)
{

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  #ifdef NEVER
 //  HAL_TIM_Encoder_Start_IT(&htim3, TIM_CHANNEL_ALL);
 // HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_1);
 // HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_2);
 // HAL_TIM_PWM_Start(&htim2,TIM_CHANNEL_3);
  // rc = fetch_int32_arg(&MotorPos);
  //if(rc) {
  // printf("Please Enter position between -2,147,483,646 and +2,147,483,646\n");
  //} 
  
 //if(MotorPos > 0){
    
  // HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
   HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1); 
 }
  if (MotorPos < 0){
    MotorPos = 0 - MotorPos;
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  }
     

    // printf("count input capture count is %li \n", count);
     //printf("count TIM3 coutnt is %i \n", count_1);
     #endif
     // HAL_TIM_Encoder_Start_IT(&htim3, TIM_CHANNEL_ALL);
     int16_t position =  ((int16_t)(TIM3->CNT))/2;
     printf("POS: %i º \n", position);
     
     
     return CmdReturnOk;
 }    
     
       
 ADD_CMD("pos",CmdEncoder2,"position")   
  


// FUNCTION      :TIM3_IRQHandler
// DESCRIPTION   :interrupt handler for timer 3 
// PARAMETERS    : void
//         
// RETURNS       :void
//  

void TIM3_IRQHandler(void)
{
  
  HAL_TIM_IRQHandler(&htim3);
}

 
// FUNCTION      :HAL_TIM_IC_CaptureCallback
// DESCRIPTION   :HAL callback function for interrupt handler for timer 11 
// PARAMETERS    :TIM_HandleTypeDef* htim -
//                 pointer to TIM_HandleTypeDef structure 
//         
// RETURNS       :void
//   
  
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef* htim){
   if(htim->Instance == TIM3){ 
     count++;
  
     if (count == 60){
       count  = 0;
       TIM3->CNT = 0;
       //HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
       //HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0); 
      }
  
     }
   
}
