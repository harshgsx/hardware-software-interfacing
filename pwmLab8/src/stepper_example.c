// CNTR8005 example of using a timer to create an interrupt
// Allan Smith
// Oct 12, 2021
#include <stdio.h>
#include <stdint.h>

#include "common.h"
#include "main.h"

TIM_HandleTypeDef tim11;												


int gDirection = 0;
int gIsStepperEnabled = 0;

void Timer11_Init(int pulseDuration){

    __HAL_RCC_TIM11_CLK_ENABLE();
	tim11.Instance = TIM11;
	tim11.Init.Prescaler = HAL_RCC_GetPCLK2Freq() / 1000000 - 1;			// this will cause the timer to create ms (set to 1000000 - 1 for us)
	tim11.Init.CounterMode = TIM_COUNTERMODE_UP;
	tim11.Init.Period = pulseDuration/2;											// in this example the number here will be the number of ms for on/off
	tim11.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	tim11.Init.RepetitionCounter = 0;
	tim11.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;		// this parameter will cause the timer to reset when timed out
	HAL_TIM_Base_Init(&tim11);

	HAL_NVIC_SetPriority(TIM1_TRG_COM_TIM11_IRQn, 10, 0U);				// note the timer 11 IRQ on this board is shared with Timer 1
	HAL_NVIC_EnableIRQ(TIM1_TRG_COM_TIM11_IRQn);

HAL_TIM_Base_Start_IT(&tim11);
	
}


void gpioInit(){
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
}

ParserReturnVal_t  enableDisableStepper(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;
  
  uint32_t stepperStatus, rc;

  //taking the input from user for enabling and disabling the stepper motor. 
  rc=fetch_uint32_arg(&stepperStatus);
  if(rc)
  {
    printf("Please enable or disable stepper controller.\n");
    return CmdReturnBadParameter1;
  }

  //validating against the user input and reflecting it to the global variable.
  if(stepperStatus == 1)
  {   
    gIsStepperEnabled = 1; 
    printf("stepper motor enabled.\n");
  } else if (stepperStatus == 0)
  {
    gIsStepperEnabled = 0; 
    printf("stepper motor disabled.\n");
  }

  return CmdReturnOk;
}
ADD_CMD("se",enableDisableStepper,"         enable or disable stepper.\n");

ParserReturnVal_t StepSpeedAction(int mode)
{
	uint32_t dir, rcDir, delay,rcDelay;
	  
	if(mode != CMD_INTERACTIVE) return CmdReturnOk;

    rcDir = fetch_uint32_arg(&dir);

    rcDelay = fetch_uint32_arg(&delay);

    if(rcDelay || rcDir) {
    printf("Please specify the direction and delay.\n");
     return CmdReturnBadParameter1;
    }

    gDirection = dir;

    if(gIsStepperEnabled != 1)
    {
        printf("Please enable stepper motor.");
        return CmdReturnOk;
    }
    else 
    {
    
    printf("Inside motor init\n");
    gpioInit();
    Timer11_Init(delay);
    HAL_TIM_Base_Start_IT(&tim11);

    }

	return CmdReturnOk;
}

ADD_CMD("ss",StepSpeedAction,"<dir> <delay>    Make stepper step at a speed set by the delay value.\n");


ParserReturnVal_t StepSpeedQAction(int mode)
{
	uint32_t dir;
    uint32_t rcDir;
    uint32_t delay1;
    uint32_t delay2;
    uint32_t delay3;
    uint32_t rcDelay1;
    uint32_t rcDelay2;
    uint32_t rcDelay3;
    uint32_t stepSeq = 0;
	  
	if(mode != CMD_INTERACTIVE) return CmdReturnOk;

    rcDir = fetch_uint32_arg(&dir);
    rcDelay1 = fetch_uint32_arg(&delay1);
    rcDelay2 = fetch_uint32_arg(&delay2);
    rcDelay3 = fetch_uint32_arg(&delay3);

    if(rcDelay1 || rcDelay2 || rcDelay3 || rcDir ) {
    printf("Please specify the direction and delay.\n");
     return CmdReturnBadParameter1;
    }

    // if(delay1 > delay2){
    // printf("Motor should start with a slower speed.\n");
    //  return CmdReturnBadParameter1;
    // }

    gDirection = dir;

    if(gIsStepperEnabled != 1)
    {
        printf("Please enable stepper motor.");
        return CmdReturnOk;
    }
    else 
    {
    for(int i = 0; i < 2048; i++)
    {
        if(stepSeq == 0 && i == 0) 
        {
            printf("Starting with delay 1 %ld..\n", delay1);
            gpioInit();
            Timer11_Init(delay1);
            
        } else if(stepSeq == 0 && i == 2048 - 1){
            i = 0;
            stepSeq = 1;
        } else if(stepSeq == 1 && i == 0) 
        {
            printf("Starting with delay 2 %ld..\n", delay2);
            gpioInit();
            Timer11_Init(delay2);
     
        } else if(stepSeq == 1 && i == 2048 - 1){
            i = 0;
            stepSeq = 2;
        } else if(stepSeq == 2 && i == 0) 
        {
            printf("Starting with delay 2 %ld..\n", delay2);
            gpioInit();
            Timer11_Init(delay2);
            
        } else if(stepSeq == 2 && i == 2048 - 1){
            printf("Stopping.\n");
           
        }
    }
    }

	return CmdReturnOk;
}

ADD_CMD("sq",StepSpeedQAction,"<dir> <delay1> <delay2> <delay3>           Make stepper step at a speed set by the delay value.\n");

void TIM1_TRG_COM_TIM11_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&tim11);
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim )
{
	if( htim == &tim11 ){								// check if this was meant for us
		HAL_GPIO_TogglePin( LD2_GPIO_Port, LD2_Pin );
        
        //Telling motor to rotate CW or CCW
        if(gDirection < 0)
        {
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
        } 
        else if(gDirection == 0)
        {
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_RESET);
        }
        else if(gDirection > 0)
        {
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
        }
        
        if(gIsStepperEnabled == 1)
        {
            //Checking if we need to switch on the Motor.
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, GPIO_PIN_SET);              
            HAL_GPIO_TogglePin( GPIOB, GPIO_PIN_10 );
        }


        
	}
}
