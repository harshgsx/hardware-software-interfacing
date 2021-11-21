
//www.DeepBlueMbedded.com
#include <stdio.h>
#include <stdint.h>
#include "common.h"
#include <main.h>

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim11;
extern IWDG_HandleTypeDef hiwdg;


uint32_t rc = 0;
volatile uint16_t secondsCounter = 0;
volatile uint16_t counterStart = 0;
uint32_t setTime = 0; 
uint8_t checkResult = 0;    // used as return variable from checkValues() function




// FUNCTION      : CmdDC
// DESCRIPTION   : 
// PARAMETERS    : int mode
//         
// RETURNS       :CmdReturnOk is successfull
//  
ParserReturnVal_t CmdDC(int mode)
{

 if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  __HAL_RCC_TIM11_CLK_ENABLE();
  __HAL_RCC_TIM1_CLK_ENABLE();
  
 
  HAL_NVIC_SetPriority(TIM1_TRG_COM_TIM11_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(TIM1_TRG_COM_TIM11_IRQn);
  TIM_OC_InitTypeDef sConfigOC = {0};
  

  htim11.Instance = TIM11;
  htim11.Init.Prescaler = 49999;     // interrupt time period of 1000 msec
  htim11.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim11.Init.Period = 1999;   // interrupt time period of 1000 msec
  htim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  rc = HAL_TIM_Base_Init(&htim11) != HAL_OK;
  if(rc != HAL_OK) {
    printf("TIM 11 initialization failed \n");
  } 
  rc = HAL_TIM_OC_Init(&htim11) != HAL_OK;
  
  if(rc != HAL_OK) {
    printf("TIM 11 initialization failed \n");
  } 
  sConfigOC.OCMode = TIM_OCMODE_TIMING;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  rc = HAL_TIM_OC_ConfigChannel(&htim11, &sConfigOC, TIM_CHANNEL_1) != HAL_OK;
  if(rc != HAL_OK) {
    printf("TIM 11 channel configuration failed \n");
  } 
  
  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  
  TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = {0};

   // timer 1 initialization. Used as three channel PWM timer.   
  htim1.Instance = TIM1;
  htim1.Init.Prescaler = 49;
  htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim1.Init.Period = 199;
  htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim1.Init.RepetitionCounter = 0;
  htim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  rc= HAL_TIM_Base_Init(&htim1);
   if(rc!= HAL_OK)
   {
    printf("Error");
   }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  rc = HAL_TIM_ConfigClockSource(&htim1, &sClockSourceConfig);
  if(rc!= HAL_OK)
   {
    printf("Error");
   }
  rc = HAL_TIM_PWM_Init(&htim1) != HAL_OK;
  if(rc!= HAL_OK)
   {
    printf("Error");
   }
  
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  rc = HAL_TIMEx_MasterConfigSynchronization(&htim1, &sMasterConfig);
  if(rc!= HAL_OK)
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
  rc = HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_1);
  if(rc!= HAL_OK)
   {
    printf("Channel 1 configuration failed.\n");
   }
  
  rc = HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_2);
  if(rc!= HAL_OK)
   {
    printf("Channel 2 configuration failed.\n");
   }
  
  rc = HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3);
  if(rc!= HAL_OK)
   {
    printf("Channel 3 configuration failed.\n");
   }
  
  sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
  sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
  sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
  sBreakDeadTimeConfig.DeadTime = 0;
  sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
  sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
  sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;
  rc = HAL_TIMEx_ConfigBreakDeadTime(&htim1, &sBreakDeadTimeConfig);
  if(rc!= HAL_OK)
  {
    printf("could not config breakdown time.\n");
  }
  

  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  
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

 
  
  HAL_TIM_Base_Start_IT(&htim11);     // start timer11 with interrupts enabled for time base
  HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_3);
   
  return CmdReturnOk;
 
}

ADD_CMD("dci",CmdDC,"Init DC Motor")

ParserReturnVal_t CmdDC2(int mode)
{

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  uint32_t Motor_1_Dir = 0;
  //uint32_t Motor_2_Dir = 0;
  uint32_t Motor_1_Speed = 0;
  //uint32_t Motor_2_Speed = 0;
 
 
  rc = fetch_uint32_arg(&Motor_1_Dir);
  if(rc) {
   printf("Please Enter 0 to stop 1 for forward 2 for reverse\n");
  } 
  rc = fetch_uint32_arg(&Motor_1_Speed);
  if(rc) {
   printf("Please Enter speed in percentage between 0 and 100 \n");
  }
  else if(Motor_1_Speed < 0 || Motor_1_Speed > 100) {
    printf("Please Enter speed in percentage between 0 and 100 \n"); 
  }
 
   rc = fetch_uint32_arg(&setTime);
  if(rc) {
   printf("Please Enter time in seconds\n");
  }
  
  
  	  
   switch (Motor_1_Dir) {
    case 0:
      HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_1);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
      secondsCounter = 0;
      break;
    case 1:
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
     secondsCounter = 0;
     counterStart = 1;
     break;
   case 2:
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
     secondsCounter = 0;
     counterStart = 1;
     break;
     
   default:
   printf("Please Enter 0 to stop 1 for forward 2 for reverse\n");
   break;
  }
  
  
   TIM1->CCR1  = (100 +(Motor_1_Speed))-1;
   TIM1->CCR2 = (50 +((Motor_1_Speed  * 150)/ 100))-1;
   
    return CmdReturnOk;
 }    
     
       
 ADD_CMD("dc",CmdDC2,"dc <dir> <speed> <time-in-seconds>")   
  


// FUNCTION      :TIM1_TRG_COM_TIM11_IRQHandler
// DESCRIPTION   :interrupt handler for timer 11 
// PARAMETERS    : void
//         
// RETURNS       :void
//  
void TIM1_TRG_COM_TIM11_IRQHandler(void){
   HAL_TIM_IRQHandler(&htim11);
}
 
 
// FUNCTION      :HAL_TIM_PeriodElapsedCallback
// DESCRIPTION   :HAL callback function for interrupt handler for timer 11 
// PARAMETERS    :TIM_HandleTypeDef* htim -
//                 pointer to TIM_HandleTypeDef structure 
// RETURNS       :void
//   
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim){
   if(htim->Instance == TIM11){  
     if(counterStart == 1){
       secondsCounter++;
      }
     if (secondsCounter == setTime){
      
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
      secondsCounter =0;
    }
   }
}
