// CNTR8005 example of using a timer to create an interrupt
// Allan Smith
// Oct 12, 2021
#include <stdio.h>
#include <stdint.h>

#include "common.h"
#include "main.h"

TIM_HandleTypeDef tim11;												// handle for timer11 used in this example

// FUNCTION      : CmdTimerIrq
//
// DESCRIPTION   :
//   This is the interrupt handler for timer 11 and 1.  It is usually created by CubeMX if we were using it
//
// PARAMETERS    :
//   mode - can be ignored
//
// RETURNS       :
//   CmdReturnOk is successfull
ParserReturnVal_t CmdTimerIrq(int mode)
{
	uint32_t val,rc;
	  
	if(mode != CMD_INTERACTIVE) return CmdReturnOk;

	/* Put your command implementation here */
	printf("Example of using timer for IRQ\n");

  rc = fetch_uint32_arg(&val);
  if(rc) {
    printf("Please supply the period to flash the built in LED\n");
    return CmdReturnBadParameter1;
  }

	__HAL_RCC_TIM11_CLK_ENABLE();
	tim11.Instance = TIM11;
	tim11.Init.Prescaler = HAL_RCC_GetPCLK2Freq() / 1000 - 1;			// this will cause the timer to create ms (set to 1000000 - 1 for us)
	tim11.Init.CounterMode = TIM_COUNTERMODE_UP;
	tim11.Init.Period = val/2;											// in this example the number here will be the number of ms for on/off
	tim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	tim11.Init.RepetitionCounter = 0;
	tim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;		// this parameter will cause the timer to reset when timed out
	HAL_TIM_Base_Init(&tim11);

	HAL_NVIC_SetPriority(TIM1_TRG_COM_TIM11_IRQn, 10, 0U);				// note the timer 11 IRQ on this board is shared with Timer 1
	HAL_NVIC_EnableIRQ(TIM1_TRG_COM_TIM11_IRQn);

	HAL_TIM_Base_Start_IT(&tim11);

   GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4|LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10|GPIO_PIN_4, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PA4 LD2_Pin */
  GPIO_InitStruct.Pin = GPIO_PIN_4|LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB10 PB4 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_4;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

//Telling motor to rotate CW or CCW
HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);

//Checking if we need to switch on the Motor.
HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);  

	return CmdReturnOk;
}
ADD_CMD("timerIrq",CmdTimerIrq,"                using a timer with IRQ example")


// FUNCTION      : TIM1_TRG_COM_TIM11_IRQHandler
//
// DESCRIPTION   :
//   This is the interrupt handler for timer 11 and 1.  It is usually created by CubeMX if we were using it
//
// PARAMETERS    :
//   None
//
// RETURNS       :
//   Nothing
void TIM1_TRG_COM_TIM11_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&tim11);
}

// FUNCTION      : HAL_TIM_PeriodElapsedCallback
//
// DESCRIPTION   :
//   This is the interrupt handler for timer 11 and 1.  It is usually created by CubeMX if we were using it
//
// PARAMETERS    :
//   htim - the handle to the timer configuration information
//
// RETURNS       :
//   Nothing
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim )
{
	if( htim == &tim11 ){								// check if this was meant for us
		HAL_GPIO_TogglePin( LD2_GPIO_Port, LD2_Pin );
        
        //Telling motor to rotate CW or CCW
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);

        //Checking if we need to switch on the Motor.
        HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);  

        HAL_GPIO_TogglePin( GPIOB, GPIO_PIN_10 );
	}
}
