/*******************************************************************************
  * File Name          : pwm_example.c
  * Description        : This src code controlls RGB LED light's brightness based on three channels. 
                       : Harsh Hirenbhai Shah
                       : Arsh Sandhu
  Lab                  : 8
  Date                 : Nov-28-2021
  ******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

#include "common.h"
#include "main.h"

TIM_HandleTypeDef tim1;			// handle for timer1 used

int32_t steps;					//declared as global vaiable as used in multiple
uint32_t delayVal; 

void setRGB (uint8_t red, uint8_t green, uint8_t blue);

ParserReturnVal_t CmdPWMInit(int action)
{

    if (action == CMD_SHORT_HELP)
        return CmdReturnOk;
    if (action == CMD_LONG_HELP)
    {
        printf("timinit\n\n"
               "This command initialize timer 1 PWM channels and its respective gpio pins\n");

        return CmdReturnOk;
    }
    
    /* Initialize PWM */
__HAL_RCC_TIM1_CLK_ENABLE();
tim1.Instance = TIM1;
tim1.Init.Prescaler = HAL_RCC_GetPCLK2Freq() / 1000000 - 1;
tim1.Init.CounterMode = TIM_COUNTERMODE_UP;
tim1.Init.Period = 1000;
tim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
tim1.Init.RepetitionCounter = 0;
HAL_TIM_Base_Init(&tim1);

TIM_OC_InitTypeDef sConfig;
sConfig.OCMode = TIM_OCMODE_PWM1;
sConfig.Pulse = 500;
sConfig.OCPolarity = TIM_OCPOLARITY_HIGH;
sConfig.OCNPolarity = TIM_OCNPOLARITY_LOW;
sConfig.OCFastMode = TIM_OCFAST_DISABLE;
sConfig.OCIdleState = TIM_OCIDLESTATE_RESET;
sConfig.OCNIdleState =TIM_OCNIDLESTATE_RESET;

HAL_TIM_PWM_ConfigChannel(&tim1,&sConfig,TIM_CHANNEL_1);
HAL_TIM_PWM_ConfigChannel(&tim1,&sConfig,TIM_CHANNEL_2);
HAL_TIM_PWM_ConfigChannel(&tim1,&sConfig,TIM_CHANNEL_3);

GPIO_InitTypeDef GPIO_InitStruct = {0};
__HAL_RCC_GPIOA_CLK_ENABLE();
/* Configure the PWM output pins */
GPIO_InitStruct.Pin = (GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10);
GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
GPIO_InitStruct.Pull = GPIO_NOPULL;
GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
GPIO_InitStruct.Alternate = 1;
HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    return CmdReturnOk;
}

ADD_CMD("pwmi", CmdPWMInit, "pwm init")


ParserReturnVal_t CmdPWM(int mode)
{

  uint32_t waveType, rcWaveType;
  uint32_t brightness, rcBrightness;
  uint32_t repeateCount, rcRepeateCount;

  if((mode != CMD_INTERACTIVE)) return CmdReturnOk;

  rcWaveType = fetch_uint32_arg(&waveType);
  if(rcWaveType) {
    printf("Please provide wave type either 0 or 1. Default is circular wave : %ld\n",waveType);
    waveType = 0;
  }

  rcBrightness = fetch_uint32_arg(&brightness);
  if(rcBrightness) {
    printf("Please provide brighness between 1 & 500. Default is 500: %ld\n", brightness);
    brightness = 500;

  }

  rcRepeateCount = fetch_uint32_arg(&repeateCount);
  if(rcRepeateCount) {
    printf("Please repeate count should greater than 0. Default is 25: %ld\n",repeateCount);   
    repeateCount = 25;
  }


  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_1);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_2);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_3);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_3);

  tim1.Instance->CCR1 = 0;
  tim1.Instance->CCR2 = 0;
  tim1.Instance->CCR3 = 0;


volatile float pwm_value = 0.0f;
volatile float brightnessInFloat = brightness * 1.0f;

for(int j = 0; j < repeateCount; j++)
{
  //printf("%d\n",j);
  for(int ii = 0; ii < brightness; ii++)
  {
    if(waveType == 1)
    {
       pwm_value = 255.0 * (1.0 - abs((int)(2.0*(ii/brightnessInFloat) - 1.0)));
    } else if(waveType == 0)
    {
      pwm_value = 255.0 * sqrt(1.0 - pow(abs((int)(2.0*(ii/brightnessInFloat)) - 1.0),2.0));
    }

    tim1.Instance->CCR1 = (int)pwm_value;
    tim1.Instance->CCR2 = (int)pwm_value;
    tim1.Instance->CCR3 = (int)pwm_value;
    //printf("%d\n",ii);
    HAL_Delay(1);
    WDTFeed();
  }
  HAL_Delay(10);
}
  
	HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_1);
  HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_2);
  HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_3);
  
  return CmdReturnOk;
}
ADD_CMD("pwm",CmdPWM,"pwm <wave-type> <brightness> <repeat> 0|1 0 = tringular wave, 1 = circular wave")


ParserReturnVal_t CmdRGB(int mode)
{
  uint32_t red_channel, green_channel, blue_channel, rc_red, rc_green, rc_blue;
  
 

  rc_red = fetch_uint32_arg(&red_channel);
  if(rc_red) {
    printf("Please specify red cahnnel value\n");
    return CmdReturnBadParameter1;
  }

  rc_green = fetch_uint32_arg(&green_channel);
  if(rc_green) {
    printf("Please specify green cahnnel value\n");
    return CmdReturnBadParameter1;
  }

  rc_blue = fetch_uint32_arg(&blue_channel);  
  if(rc_blue) {
    printf("Please specify blue cahnnel value\n");
    return CmdReturnBadParameter1;
  }



  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_1);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_1);
  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_2);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_2);
  HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_3);
  HAL_TIMEx_PWMN_Start(&tim1, TIM_CHANNEL_3);


  setRGB (red_channel,green_channel,blue_channel);  


  return CmdReturnOk;
}
ADD_CMD("rgb",CmdRGB,"rgb R|G|B")


ParserReturnVal_t CmdStopPWM(int mode)
{
	uint32_t rc, val;
	
	if (mode != CMD_INTERACTIVE) return CmdReturnOk;

	rc = fetch_uint32_arg(&val); 
	if (rc) 
	HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_1);
  HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_2);
  HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_3);
	
	return CmdReturnOk;
}

ADD_CMD("pwmstop", CmdStopPWM,"                         To Stop timer")


void setRGB (uint8_t red, uint8_t green, uint8_t blue)
{
  tim1.Instance->CCR1 = red;
  tim1.Instance->CCR2 = green;
  tim1.Instance->CCR3 = blue;

  HAL_Delay(10);
}

