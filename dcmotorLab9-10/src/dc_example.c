// #include <stdio.h>
// #include <stdint.h>
// #include <stdlib.h>
// #include <math.h>

// #include "common.h"
// #include "main.h"


// // DC Motor Rotation Directions
// #define CLOCK_WORK    0
// #define COUNTER_CLOCK_WORK   1

// // DC Motor PWM Properties
// #define DC_MOTOR_PWM_RES  10
// #define DC_MOTOR_F_PWM    500

// #define MAX_RPM 90

// int motorAction = -1;
// int motorDirection = -1;
// int motorSpeed = -1;

// //ADC_HandleTypeDef hdac1;

// void CmdDcConfig()
// {
//     // Need to initialize tim1 or 3.
//     // need to setup adc and its relevent GPIO

//     GPIO_InitTypeDef GPIO_InitStruct = {0};
// 	  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
//     TIM_MasterConfigTypeDef sMasterConfig = {0};
//     TIM_OC_InitTypeDef sConfigOC = {0};
//     TIM_HandleTypeDef htim;
//     uint32_t PSC_Value = 0;
//     uint32_t ARR_Value = 0;
//     uint8_t i = 0;

// 	/*--------[ Configure The 2 Direction Control GPIO Pins ]-------*/

//     __HAL_RCC_GPIOA_CLK_ENABLE();
//     __HAL_RCC_GPIOB_CLK_ENABLE();
//     __HAL_RCC_GPIOC_CLK_ENABLE();

// 	GPIO_InitStruct.Pin = (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8);
// 	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
// 	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
// 	HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	
//   // GPIO_InitStruct.Pin = GPIO_PIN_1;
// 	// GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
// 	// GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
// 	// HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

// 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8, 0);
// 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);


// 	ARR_Value = 1;
// 	for(i=0; i<DC_MOTOR_PWM_RES; i++)
// 	{
// 		ARR_Value *= 2;
// 	}
// 	PSC_Value = (uint32_t) ((72*1000000) / (ARR_Value*DC_MOTOR_F_PWM));
// 	PSC_Value--;
// 	ARR_Value -= 2;

// 	/*--------[ Configure The DC Motor PWM Timer Channel ]-------*/

// 	htim.Instance = TIM1;
// 	htim.Init.Prescaler = PSC_Value;
// 	htim.Init.CounterMode = TIM_COUNTERMODE_UP;
// 	htim.Init.Period = ARR_Value;
// 	htim.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
// 	htim.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
// 	HAL_TIM_Base_Init(&htim);
// 	sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
// 	HAL_TIM_ConfigClockSource(&htim, &sClockSourceConfig);
	
// 	HAL_TIM_PWM_Init(&htim);
// 	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
// 	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
// 	HAL_TIMEx_MasterConfigSynchronization(&htim, &sMasterConfig);
// 	sConfigOC.OCMode = TIM_OCMODE_PWM1;
// 	sConfigOC.Pulse = 0;
// 	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
// 	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;

// 	HAL_TIM_PWM_ConfigChannel(&htim, &sConfigOC, TIM_CHANNEL_1);
// 	//HAL_TIM_MspPostInit(&htim);


// 	HAL_TIM_PWM_Start(&htim, TIM_CHANNEL_1);

// }

// ParserReturnVal_t CmdDCInit(int mode)
// {
//  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
// //  MX_GPIO_Init();
// //  MX_ADC1_Init();
// //  HAL_ADCEx_Calibration_Start(&hdac1);
//  CmdDcConfig();
//  return CmdReturnOk;
// }
// ADD_CMD("dci", CmdDCInit, "initialize GPIOs for dc motor")

// ParserReturnVal_t CmdDC(int mode)
// {

//  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  
//   uint32_t direction, rcDirection;
//   uint32_t speed, rcSpeed;
 
//   rcDirection=fetch_uint32_arg(&direction);
  
//   if(rcDirection)
//   {
// 	  printf("Please provide direction");
// 	  return CmdReturnBadParameter1;
//   }

//   rcSpeed = fetch_uint32_arg(&speed);
//   if(rcSpeed)
//   {
// 	  printf("Please provide rpm for motor.\n");
// 	  return CmdReturnBadParameter1;
//   }
   
//    if(direction > -1 && direction <= 1)
//    {
// 	   motorDirection = direction;
//    }
//   if(speed > 0 && speed < MAX_RPM)
//   { 
// 	  motorSpeed = speed;
//   } else {
// 	  printf("Please provide valid speed for motor.\n");
//   }
// motorAction = 1;
// //   //if((motorDirection == 0 || motorDirection == 1) && (motorSpeed > 0 && motorSpeed < 90))
// //   {
// // 	  printf("telling motor to start");
// // 	  motorAction = 1;
// //   }
// int i = 50;
// while(i<50){
// 	i--;
//   if(motorAction == 0) //stop motor
//   {
// 	  printf("inside motor action 0\n");

// 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// 	TIM1->CCR1 = 0;

//   }
//   else if(motorAction == 1) // start motor
//   {
// 	  printf("inside start motor\n");
//      if(motorDirection == CLOCK_WORK)
// 	  {
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// 	  }
// 	  else if(motorDirection == COUNTER_CLOCK_WORK)
// 	  {
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
// 	  }
    
//     if(motorSpeed > 0 && motorSpeed < MAX_RPM)
//     {
//       TIM1->CCR1 = motorSpeed;
//     }
//   } else if(motorAction == 2)
//   {
// 	       if(motorDirection == CLOCK_WORK)
// 	  {
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// 	  }
// 	  else if(motorDirection == COUNTER_CLOCK_WORK)
// 	  {
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
// 	  }
    
//     if(motorSpeed > 0 && motorSpeed < MAX_RPM)
//     {
//       TIM1->CCR1 = motorSpeed + 2;
// 	  HAL_Delay(1000);
//     } else if(motorSpeed == MAX_RPM && motorSpeed != 0)
// 	{
// 		TIM1->CCR1 = motorSpeed - 2;
// 		HAL_Delay(1000);
// 	}
// WDTFeed();
//   }
//   }
//   return CmdReturnOk;
// }

// ADD_CMD("dc",CmdDC,"dc <dir> <speed>")

// ParserReturnVal_t CmdDCStop(int mode)
// {

//  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  
//   motorAction = 0;
// return CmdReturnOk;
  
// }
// ADD_CMD("dcstop",CmdDCStop,"stop dc motor")

// ParserReturnVal_t CmdMotion(int mode)
// {

//  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  
//   motorAction = 2;

//   return CmdReturnOk;
// }
// ADD_CMD("dcmotion",CmdMotion,"run dc motor motion profile")

// // void ExampleInit(void *data)
// // {

// // }

// // void ExampleTask(void *data)
// // {

// //   if(motorAction == 0) //stop motor
// //   {
// // 	  printf("inside motor action 0\n");

// // 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// // 	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// // 	TIM1->CCR1 = 0;

// //   }
// //   else if(motorAction == 1) // start motor
// //   {
// // 	  printf("inside start motor\n");
// //      if(motorDirection == CLOCK_WORK)
// // 	  {
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// // 	  }
// // 	  else if(motorDirection == COUNTER_CLOCK_WORK)
// // 	  {
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
// // 	  }
    
// //     if(motorSpeed > 0 && motorSpeed < MAX_RPM)
// //     {
// //       TIM1->CCR1 = motorSpeed;
// //     }
// //   } else if(motorAction == 2)
// //   {
// // 	       if(motorDirection == CLOCK_WORK)
// // 	  {
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
// // 	  }
// // 	  else if(motorDirection == COUNTER_CLOCK_WORK)
// // 	  {
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
// // 		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
// // 	  }
    
// //     if(motorSpeed > 0 && motorSpeed < MAX_RPM)
// //     {
// //       TIM1->CCR1 = motorSpeed + 2;
// // 	  HAL_Delay(1000);
// //     } else if(motorSpeed == MAX_RPM && motorSpeed != 0)
// // 	{
// // 		TIM1->CCR1 = motorSpeed - 2;
// // 		HAL_Delay(1000);
// // 	}

// // 	//if(motorSpeed)
// //   } 
// // WDTFeed();
// // }

// // ADD_TASK(ExampleTask,  /* This is the name of the function for the task */
// // 	 ExampleInit,  /* This is the initialization function */
// // 	 NULL,         /* This pointer is passed as 'data' to the functions */
// // 	 0,            /* This is the number of milliseconds between calls */
// // 	 "This is the help text for the task")

#include <stdio.h>
#include <stdint.h>
#include "common.h"
#include <main.h>

TIM_HandleTypeDef htim1;
TIM_HandleTypeDef htim11;
extern IWDG_HandleTypeDef hiwdg;


uint32_t rc = 0;
volatile uint16_t oneSecondCount = 0;
volatile uint16_t counterStart = 0;
uint32_t setTime = 0; 
uint8_t checkResult = 0;    // used as return variable from checkValues() function

uint8_t checkValues(uint32_t Motor_1_Speed, uint32_t Motor_2_Speed);  // function prototype


// FUNCTION      : CmdPWM
// DESCRIPTION   : This function initializes two timers. Timer 11 for time base generation and timer
//                 1 as PWM timer.
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
  
 // timer 11 initialization. Timer 11 is used as time base for timing purpose
 
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
    printf("Error");
   }
  
  rc = HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_2);
  if(rc!= HAL_OK)
   {
    printf("Error");
   }
  
  rc = HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_3);
  if(rc!= HAL_OK)
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
  rc = HAL_TIMEx_ConfigBreakDeadTime(&htim1, &sBreakDeadTimeConfig);
  if(rc!= HAL_OK)
  {
    printf("Error");
  }
  
  // GPIO pin configuration 
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
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
  uint32_t Motor_2_Dir = 0;
  uint32_t Motor_1_Speed = 0;
  uint32_t Motor_2_Speed = 0;
 
 
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
 
  rc = fetch_uint32_arg(&Motor_2_Dir);
  if(rc) {
   printf("Please Enter 0 to stop 1 for forward 2 for reverse\n");
  }
  rc = fetch_uint32_arg(&Motor_2_Speed);
  if(rc) {
   printf("Please Enter speed in percentage between 0 and 100 \n");
  }
  else if(Motor_2_Speed < 0 || Motor_2_Speed > 100) {
    printf("Please Enter speed in percentage between 0 and 100 \n"); 
  }
  rc = fetch_uint32_arg(&setTime);
  if(rc) {
   printf("Please Enter time in seconds\n");
  }
  
  checkResult = checkValues(Motor_1_Speed, Motor_2_Speed); // before proceeding check values entered are within range
  
  if(checkResult == 1) {    // if values ok then proceed
  //printf("all ok");
   switch (Motor_1_Dir) {
    case 0:
      HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_1);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
      oneSecondCount = 0;
      break;
     
    case 1:
  
     
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
     oneSecondCount = 0;
     counterStart = 1;
     break;
     
   case 2:
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
     oneSecondCount = 0;
     counterStart = 1;
     break;
     
   default:
   printf("Please Enter 0 to stop 1 for forward 2 for reverse\n");
   break;
  }
   switch (Motor_2_Dir){
    case 0: 
      
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
      oneSecondCount = 0;
      break;
     
    case 1:
    
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
     HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
     oneSecondCount = 0;
     counterStart = 1;
     break;
     
    case 2:
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
     HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
     oneSecondCount = 0;
     counterStart = 1;
     break;
     
    default:
   printf("Please Enter 0 to stop 1 for forward 2 for reverse\n");
   break;
  }
  }
  
   TIM1->CCR1  = (100 +(Motor_1_Speed))-1;
   TIM1->CCR2 = (50 +((Motor_1_Speed  * 150)/ 100))-1;
   printf("%li",(100 +(Motor_1_Speed))-1);
   
    return CmdReturnOk;
 }    
     
       
 ADD_CMD("DC",CmdDC2,"DC motor init")   
  


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
//         
// RETURNS       :void
//   
  
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim){
   if(htim->Instance == TIM11){  
     if(counterStart == 1){
       ++oneSecondCount;
      }
     if (oneSecondCount == setTime){
      
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
      oneSecondCount =0;
    }
   }
}

// DESCRIPTION   : checkValues()
// PARAMETERS    : uint32_t* speed
//                - pointer to speed array
//         
// RETURNS       : uint8_t checkResult
//                 - checkResult value returned 1 if data within range and 0 if data
//                   is out of range.   
//  
uint8_t checkValues(uint32_t Motor_1_Speed, uint32_t Motor_2_Speed){
for (int i =0; i<3; i++){
  if(Motor_1_Speed < 0 || Motor_1_Speed > 100){
    return checkResult = 0;
  }
   else if(Motor_2_Speed < 0 || Motor_2_Speed > 100){
    return checkResult = 0;
  }
 }
 return checkResult = 1;	
} 