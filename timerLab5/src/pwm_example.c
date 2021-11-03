/*******************************************************************************
  * File Name          : timer_example.c
  * Description        : Allows user to control TIM11 with user defined precice custom delay.                       
                       : It also takes the ref from the following websites. 
                       : https://deepbluembedded.com/stm32-timer-interrupt-hal-example-timer-mode-lab/
  * Author             : Harsh Hirenbhai Shah
                       : Arsh Sandhu
  * Date               : Oct-6-2021
  ******************************************************************************
  */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

#include "common.h"
#include "main.h"



//tim11 handel
TIM_HandleTypeDef htim1;



/**
 * @brief  Transform the input RGB value to PWM scale
 * @param  Value for mapping 0-255
 * @param  Input starting range e.g. 0
 * @param  Input ending range  e.g 255
 * @param  Output starting range e.g 0
 * @param  Output ending range   e.g 9090
 * @retval mapped PWM value within output specified range.
 */
int32_t mapRGBToPWM(int32_t x, int32_t in_min, int32_t in_max, int32_t out_min, int32_t out_max){
	return (x) * ((out_max - out_min) / (in_max - in_min));
}

/**
 * @brief  glow RGB LED by specifying Red, Green and Blue channel colors.
 * @param  Red 		from 0 to 255
 * @param  Green 	from 0 to 255
 * @param  Blue 	from 0 to 255
 * @retval None
 */
void glowRGB(uint8_t red, uint8_t blue, uint8_t green){

	//STOP all three O/P channel
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_3);

	//Get RGB values to PWM values.
	__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_1, mapRGBToPWM(green, 0, 255, 0, 9090));
	__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_2, mapRGBToPWM(blue, 0, 255, 0, 9090));
	__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_3, mapRGBToPWM(red, 0, 255, 0, 9090));

	//Apply the PWM signals as updated state.
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);

}
/**
  * @brief TIM11 Initialization Function
  * @param None
  * @retval None
  */
void timer1Init() {

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
sConfig.OCFastMode= TIM_OCFAST_DISABLE;
sConfig.OCIdleState = TIM_OCIDLESTATE_RESET;
sConfig.OCNIdleState = TIM_OCNIDLESTATE_RESET;
HAL_TIM_PWM_ConfigChannel(&tim1,&sConfig, TIM_CHANNEL_1);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
void gpioInit() {

  GPIO_InitTypeDef GPIO_InitStruct = {0};
__HAL_RCC_GPIOA_CLK_ENABLE();
/* Configure the PWM output pins */
GPIO_InitStruct.Pin = (GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8);
GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
GPIO_InitStruct.Pull = GPIO_NOPULL;
GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
GPIO_InitStruct.Alternate = 1;
HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

} 

/**
  * @brief Timer event function
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */
ParserReturnVal_t pwmInit(int mode){

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

    gpioInit();
    timer1Init();

  return CmdReturnOk;
}
ADD_CMD("pwminit",pwmInit,"              Initialize PWM pins") 


ParserReturnVal_t timerEvent(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

 for(int x = 0; x < 50; x++) {
   
        float pwm_val = 255.0*sqrt(1.0 -  pow(abs((2.0*(x/500))-1.0),2.0));
        int pwmToInt = (int) pwm_val;
        printf("%lf, %d\n",pwm_val, pwmToInt);
        //glowRGB(100,120, 150);

        TIM1->CCR1 = pwmToInt;
        HAL_TIM_PWM_Start(&tim1,TIM_CHANNEL_1);        
        HAL_Delay(500);
        HAL_TIM_PWM_Stop(&tim1,TIM_CHANNEL_1);
        WDTFeed();

      }

  return CmdReturnOk;
}

// void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
// {
//   // Check which version of the timer triggered this callback and toggle LED
//   if (htim == &htim11 )
//   { 
//     //uint32_t timer_val; 
//     __HAL_TIM_SET_COUNTER(&htim11, 0);
//     //timer_val = __HAL_TIM_GET_COUNTER(&htim11);
//     //printf("Ticks - In callback: %ld\n", timer_val);
//     WDTFeed();
//     //TIM11->CNT = 0;
//   }
// }

ADD_CMD("pwm",timerEvent,"<channel>  <value>")
