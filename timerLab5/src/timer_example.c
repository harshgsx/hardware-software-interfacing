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

#include "common.h"
#include "main.h"



//tim11 handel
TIM_HandleTypeDef htim11;

/**
  * @brief Nano second delay function.
  * @param uint16_t time
  * @retval None
  */
void DelayNS (uint16_t us)
{
	TIM11->CNT = 0;
	while (TIM11->CNT < us);
}
/**
  * @brief Microseconds second delay function.
  * @param uint16_t time
  * @retval None
  */
void DelayMS (uint16_t ms)
{
	for (uint16_t i=0; i<ms; i++)
	{
		DelayNS (1000); // 1 ms = 1000 ns.
	}
}


/**
  * @brief TIM11 Initialization Function
  * @param None
  * @retval None
  */
void timerInit() {
  htim11.Instance = TIM11;
  htim11.Init.Prescaler = 90-1;
  htim11.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim11.Init.Period = 65535;
  htim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim11) != HAL_OK)
  {
    printf("could not initialize the timer.\n");
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
void gpioInit() {
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2_Pin */
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);
} 

/**
  * @brief Timer event function
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */

ParserReturnVal_t timerEvent(int mode)
{
  gpioInit();
  timerInit();
  HAL_TIM_Base_Start(&htim11);

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

   uint32_t delay, rc;
   
  rc=fetch_uint32_arg(&delay);
  if(rc)
  {
    printf("Delay must be provided.\n");
    return CmdReturnBadParameter1;
  }

  printf("Built LED will be turnded ON and OFF for %ld microseconds \n", delay);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	DelayMS(delay);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
	DelayMS(delay);
  WDTFeed();
  return CmdReturnOk;
}

ADD_CMD("tdelay",timerEvent,"                timerdelay <microseconds delay>")
