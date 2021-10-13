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
int isStepperEnabled = -1;

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
  htim11.Init.Prescaler = 80;
  htim11.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim11.Init.Period = 65535;
  htim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim11) != HAL_OK)
  {
    printf("could not initialize the timer.\n");
  }

  HAL_TIM_Base_Start(&htim11);
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
void stepperInit() {
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
} 

/**
  * @brief Timer event function
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */

ParserReturnVal_t timerEvent(int mode)
{
  stepperInit();
  timerInit();
  

  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

if(isStepperEnabled == 0)
{
  printf("Please enable the stepper drive first. See help for more details.\n");
  return CmdReturnOk;
} 

 
uint32_t delay, rc, step = 0,rcTwo, isCW, rcisCW;
   
rc=fetch_uint32_arg(&delay);
if(rc)
  {
    printf("Delay must be provided.\n");
    return CmdReturnBadParameter1;
  }

  rcTwo = fetch_uint32_arg(&step);
  if(rcTwo)
  {
    step = 400;
    printf("User did not provided steps, default steps are 400.\n");
  }
    //RPM = 480/360 * 80 * 60

    //sets direction - REST will produce CCW, SET will create CW
	  //HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
	  //HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);

  rcisCW = fetch_uint32_arg(&isCW);
  if(rcisCW)
  {
    isCW = 1;
    printf("User did not provide the direction, so running in CW.\n");
  }  

  if(isCW == 1)
  {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
  } else if(isCW == 0)
  {
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
  }

if(isStepperEnabled == 1)
{
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);  
}


	  for(int x = 0; x<step; x++)
	  {
      //printf("inside for loop %d\n", x);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET);
		  DelayNS(delay);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET);
		  DelayNS(delay);
      WDTFeed();
	  }

  //WDTFeed();
  return CmdReturnOk;
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  // Check which version of the timer triggered this callback and toggle LED
  if (htim == &htim11 )
  { 
    //uint32_t timer_val; 
    __HAL_TIM_SET_COUNTER(&htim11, 0);
    //timer_val = __HAL_TIM_GET_COUNTER(&htim11);
    //printf("Ticks - In callback: %ld\n", timer_val);
    WDTFeed();
    //TIM11->CNT = 0;
  }
}

ADD_CMD("step",timerEvent,"                step <delay> <step> <direction> 0=CW, 1=CCW");

ParserReturnVal_t  enableDisableStepper(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  stepperInit();
  timerInit();
  uint32_t stepperStatus, rc;
   
  rc=fetch_uint32_arg(&stepperStatus);
  if(rc)
  {
    printf("Please enable or disable stepper controller.\n");
    return CmdReturnBadParameter1;
  }
  if(stepperStatus == 1)
  {   
    isStepperEnabled = 1; 
    printf("stepper motor enabled.\n");
  } else if (stepperStatus == 0)
  {
    isStepperEnabled = 0; 
    printf("stepper motor disabled.\n");
  }
      //enables or disables the stepper drive
return CmdReturnOk;
}

ADD_CMD("se",enableDisableStepper,"                stepperenable <0|1>");
