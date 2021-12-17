/*******************************************************************************
  * File Name          : example_dc.c
  * Description        : This is a genearic PID controller.
  *                    : For one dc motor it will start from slow speed and gradually after predetermined period it will reach to 
  *                    : maximum speed entered by user. this program also displays PID and speed infomration when user needs.
                       : Harsh Hirenbhai Shah
                       : Arsh Sandhu
  * Date               : Nov-28-2021
  ******************************************************************************
  */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <math.h>

#include "common.h"
#include "stm32f4xx_it.h"
#include "stm32f4xx_hal_tim.h"
#include "stm32f4xx_hal_gpio.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_pwr.h"
#include "stm32f4xx_hal_rcc_ex.h"
#include "stm32f4xx_hal_pwr_ex.h"
#include "stm32f4xx_hal_cortex.h"


static const int32_t pidP = 2.0;
static const int32_t pidI = 2.0;
static const int32_t pidD = 1.0;

double P, I, D;
int32_t encoderCurrent, encoderPrevious;
double targetRPM;
double errorCurrent, errorPrevious, errorI, errorD;
double PIDResult;
TIM_HandleTypeDef tim3;
const uint16_t period = 20000;
const uint16_t periodEncoder = 0xFFFF;
const double timebase = (1.0e-5) * period; 
const double unitsPerEncoderTurn = 4.0;
const double gearsRatio = 100;
const double encoderFullTurn = unitsPerEncoderTurn * gearsRatio;
const double pid2pwm = 1.0; 
volatile uint16_t currentPWM = period/2; 
int32_t pwmStatus = 0;
uint32_t direction = 3;

TIM_HandleTypeDef tim1; 



typedef struct {

  double P,I,D;  // constants to use
  int32_t encoderCurrent, encoderPrevious;
  double targetRPM;
  double errorCurrent, errorPrevious, errorI, errorD;
  int32_t status; // status of the PID
  double PIDResult;

}PID_CONTEXT;

volatile PID_CONTEXT pid;
/**
  * @brief Initializes all global variables with it's default values.
  * @param void
  * @retval void 
  */
void InitializePID(){

  pid.P = pidP;
  pid.D = pidD;
  pid.I = pidI;

  pid.encoderCurrent = 0;
  pid.encoderPrevious = 0;
  pid.errorCurrent = 0;
  pid.errorPrevious = 0;
  pid.errorI = 0; 
  pid.errorD = 0;

  pid.targetRPM = 0;
  pid.PIDResult = 0;
  pid.status = 0;
}


/**
  * @brief Initialzie DC Motor configurations, Timer and GPIOs.
  * @param void
  * @retval void 
  */

ParserReturnVal_t LoopInit()
{
  /*Initialize PID structure*/
  InitializePID();

  HAL_StatusTypeDef userInputReturnCode;
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Initialize DC MOTOR direction pins*/
  GPIO_InitTypeDef gpioInitStructA = {0};
  GPIO_InitTypeDef gpioInitStructureB = {0};
  GPIO_InitTypeDef gpioInitiStructureC = {0};  

    gpioInitStructA.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8;
    gpioInitStructA.Mode = GPIO_MODE_OUTPUT_PP;
    gpioInitStructA.Pull = GPIO_NOPULL;
    gpioInitStructA.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &gpioInitStructA);

    gpioInitStructureB.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8;
    gpioInitStructureB.Mode = GPIO_MODE_OUTPUT_PP;
    gpioInitStructureB.Pull = GPIO_NOPULL;
    gpioInitStructureB.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &gpioInitStructureB);

    gpioInitiStructureC.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_8;
    gpioInitiStructureC.Mode = GPIO_MODE_OUTPUT_PP;
    gpioInitiStructureC.Pull = GPIO_NOPULL;
    gpioInitiStructureC.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOC, &gpioInitiStructureC);
  
    
    GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = 2;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    
    __HAL_RCC_GPIOB_CLK_ENABLE();
    GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = 2;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    

    __HAL_RCC_TIM1_CLK_ENABLE();
    TIM_OC_InitTypeDef sConfig;
    TIM_ClockConfigTypeDef sClockSourceConfig = {0};

    tim1.Instance = TIM1;
    tim1.Init.Prescaler = HAL_RCC_GetPCLK2Freq() / 100000 - 1;
    tim1.Init.CounterMode = TIM_COUNTERMODE_UP;
    tim1.Init.Period = period;
    tim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    tim1.Init.RepetitionCounter = 0;
    tim1.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;

    if (HAL_TIM_Base_Init(&tim1) != HAL_OK)
    {
      printf("Couldn't initialize timer1. \n");
    }
    sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
    if (HAL_TIM_ConfigClockSource(&tim1, &sClockSourceConfig) != HAL_OK)
    {
      printf("Couldn't apply clock configuration on TIM1. \n");
    }

  HAL_NVIC_SetPriority((IRQn_Type) TIM1_UP_TIM10_IRQn, (uint32_t) 0, (uint32_t) 1);
  HAL_NVIC_EnableIRQ((IRQn_Type) TIM1_UP_TIM10_IRQn);
  

  HAL_TIM_Base_Start_IT(&tim1);
  sConfig.OCMode = TIM_OCMODE_PWM1;
  sConfig.Pulse = period/2;
  sConfig.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfig.OCNPolarity = TIM_OCNPOLARITY_LOW;
  sConfig.OCFastMode = TIM_OCFAST_DISABLE;
  sConfig.OCIdleState = TIM_OCIDLESTATE_RESET;
  sConfig.OCNIdleState =TIM_OCNIDLESTATE_RESET;
  HAL_TIM_PWM_ConfigChannel(&tim1, &sConfig, TIM_CHANNEL_1);
  HAL_TIM_PWM_ConfigChannel(&tim1, &sConfig, TIM_CHANNEL_2);
  HAL_TIM_PWM_ConfigChannel(&tim1, &sConfig, TIM_CHANNEL_3);

  GPIO_InitTypeDef GPIO_InitStructPWM = {0};
  __HAL_RCC_GPIOA_CLK_ENABLE();

  GPIO_InitStructPWM.Pin = (GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10);
  GPIO_InitStructPWM.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStructPWM.Pull = GPIO_NOPULL;
  GPIO_InitStructPWM.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStructPWM.Alternate = 1;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStructPWM);
  
  __HAL_RCC_TIM3_CLK_ENABLE();
  tim3.Instance = TIM3;
  tim3.Init.Prescaler = 0;
  tim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  tim3.Init.Period = periodEncoder;
  tim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  tim3.Init.RepetitionCounter = 0;
  userInputReturnCode = HAL_TIM_Base_Init(&tim3);
  
  if (userInputReturnCode != HAL_OK)
  {
      printf("Couldn't Initialize TIM3, Error Code=%u\n", userInputReturnCode);
      return CmdReturnBadParameter1;
  }

  TIM_Encoder_InitTypeDef encoderConfig;
  encoderConfig.EncoderMode = TIM_ENCODERMODE_TI12;
  encoderConfig.IC1Polarity = 0;
  encoderConfig.IC1Selection = TIM_ICSELECTION_DIRECTTI;
  encoderConfig.IC1Prescaler = 0;
  encoderConfig.IC1Filter = 3;
  encoderConfig.IC2Polarity = 0;
  encoderConfig.IC2Selection = TIM_ICSELECTION_DIRECTTI;
  encoderConfig.IC2Prescaler = 0;
  encoderConfig.IC2Filter = 3;
  userInputReturnCode = HAL_TIM_Encoder_Init(&tim3, &encoderConfig);
  if (userInputReturnCode != HAL_OK)
  {
      printf("Couldn't Initialize TIM3 Encoder, Error COde=%u\n",userInputReturnCode);
      return CmdReturnBadParameter1;
  }

  userInputReturnCode = HAL_TIM_Encoder_Start(&tim3, TIM_CHANNEL_1);
  if (userInputReturnCode != HAL_OK)
  {
      printf("Couldn't Start CHANNEL 1 on Encoder, Error Code=%u\n",userInputReturnCode);
      return CmdReturnBadParameter1;
  }
  userInputReturnCode = HAL_TIM_Encoder_Start(&tim3, TIM_CHANNEL_2);
  if (userInputReturnCode != HAL_OK)
  {
    printf("Couldn't Start CHANNEL 2 on Encoder, Error Code=%u\n", userInputReturnCode);
    return CmdReturnBadParameter1;
  }

  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);

  return CmdReturnOk;
}
ADD_CMD("li", LoopInit, "\t\t initialize encoder on TIM3.")

/**
  * @brief Get current value of Enoder.
  * @param void
  * @retval void 
  */

ParserReturnVal_t GetEncoderValue()
{ 
  uint16_t currentEnc = __HAL_TIM_GET_COUNTER(&tim3); 
  
  printf("%d\n", currentEnc);

  return CmdReturnOk;
}
ADD_CMD("encTicks", GetEncoderValue, "\t\tGet ticks of current encoder value")

/**
  * @brief Get current value of Enoder.
  * @param void
  * @retval void 
  */
ParserReturnVal_t GetSpeed()
{ 
  
 int32_t encoderDelta = pid.encoderCurrent - pid.encoderPrevious;;
  double turnsDelta = (double)encoderDelta / encoderFullTurn;
  double degreeDelta = turnsDelta*360;
  double speedEncoder = (double)encoderDelta / timebase;
  double speedTurns = turnsDelta / timebase;
  double speedDegree = degreeDelta / timebase;
  double rpms = speedTurns * 60;

  printf("Encoder: %.2lf, Speed: %.2lf, RPM: %.2lf, Degrees/s: %.2lf\n", 
    speedEncoder, speedTurns, rpms, speedDegree);

  return CmdReturnOk;
}
ADD_CMD("speed", GetSpeed, "\t\tGet current speed of DC Motor")

/**
  * @brief PID calculations
  * @param void
  * @retval void 
  */
void CalculateSpeedsAndErrors(){

  int32_t encoderDelta = pid.encoderCurrent - pid.encoderPrevious;
  double RPSDelta = (double)encoderDelta / encoderFullTurn;
  double RPM = (RPSDelta / timebase)*60;
  errorPrevious = errorCurrent;
  errorCurrent = targetRPM - RPM;
  double errorDelta = (pid.errorCurrent - pid.errorPrevious);
  errorD = errorDelta / timebase;
if(fabs(pid.errorCurrent) > fabs(pid.errorPrevious)){
    pid.errorI += (timebase * pid.errorPrevious) + (errorDelta * timebase)/2;
  }
  else {
    pid.errorI += (timebase * pid.errorCurrent) + (errorDelta * timebase)/2;
  }    
}

/**
  * @brief Set speed for dc motor
  * @param void
  * @retval void 
  */
ParserReturnVal_t SetSpeed()
{
  double desiredSpeed;
  
  if(fetch_uint32_arg(&direction)){
    printf("Please provide direction either 0 or 1. \n");
    return CmdReturnBadParameter1;
  }

  if (fetch_double_arg(&desiredSpeed))
  {
    printf("Please provide speed between 1 and 90.");
    return CmdReturnBadParameter1;
  }
  else
  {

    if (desiredSpeed > 1.00 && desiredSpeed <= 90.00)
    {

     pid.targetRPM = desiredSpeed;
      pid.status = 1;
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
      HAL_TIM_PWM_Start(&tim1, TIM_CHANNEL_1);
    }
    else
    {
      printf("Speed can't be more then 90. Please provide in Range 1 to 90.");
      return CmdReturnBadParameter1;
    }
  }
  return CmdReturnOk;
}
// MACRO: Add new command to help menu
ADD_CMD("ss", SetSpeed, "\t\tSet desired speed")

/**
  * @brief Set speed for dc motor
  * @param void
  * @retval void 
  */
ParserReturnVal_t StopMotor()
{ 
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
  pid.targetRPM = 0;
  pid.status = 0;
  HAL_TIM_PWM_Stop(&tim1, TIM_CHANNEL_1);
  __HAL_TIM_SET_COMPARE(&tim1, TIM_CHANNEL_1, 0);

  return CmdReturnOk;
}

ADD_CMD("stop", StopMotor, "\t\tStop control loop and DC motor")



/**
  * @brief Set speed for dc motor
  * @param void
  * @retval void 
  */
void TIM1_UP_TIM10_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&tim1);
}

/**
  * @brief Set speed for dc motor
  * @param void
  * @retval void 
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){

  HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

  if(direction == 0)
  {
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
  } 
  else if (direction == 1){
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
     HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
  } 

  if (pid.status == 1){

    pid.encoderPrevious = pid.encoderCurrent;
    pid.encoderCurrent = (int32_t)__HAL_TIM_GET_COUNTER(&tim3); 
    CalculateSpeedsAndErrors();
    pid.PIDResult = (pid.P * pid.errorCurrent) + (pid.I * pid.errorI) + (pid.D * pid.errorD);

    // Affect our plant
    currentPWM = __HAL_TIM_GET_COUNTER(&tim1); 
    currentPWM += ((uint16_t)(pid.PIDResult * pid2pwm));
 
    __HAL_TIM_SET_COMPARE(&tim1, TIM_CHANNEL_1, currentPWM);
    }
  
}