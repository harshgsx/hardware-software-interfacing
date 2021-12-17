#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#include "common.h"

TIM_HandleTypeDef tim11;				// handle for timer11 used


void init()
{
    
    __HAL_RCC_TIM11_CLK_ENABLE();
    
    tim11.Instance = TIM11;
    tim11.Init.Prescaler = HAL_RCC_GetPCLK2Freq() / 10000 - 1;  
    tim11.Init.CounterMode = TIM_COUNTERMODE_UP;
    tim11.Init.Period = 0xffff;  //10000;
    tim11.Init.ClockDivision =
        TIM_CLOCKDIVISION_DIV1;
    tim11.Init.RepetitionCounter = 0;
    HAL_TIM_Base_Init(&tim11);  
    
    
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    GPIO_InitTypeDef GPIO_InitStruct;  

    GPIO_InitStruct.Pin = GPIO_PIN_4  |
    			   GPIO_PIN_8  | GPIO_PIN_9  | 
    			   GPIO_PIN_11 | GPIO_PIN_12 ;

    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate = 0;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

       GPIO_InitStruct.Pin = (GPIO_PIN_14);
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);  
	
	    GPIO_InitStruct.Pin = GPIO_PIN_8 | GPIO_PIN_5 | GPIO_PIN_3 | GPIO_PIN_4;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Alternate = 0;
	HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);  

     HAL_GPIO_WritePin(GPIOC,GPIO_PIN_8,1);		//ps is set to high
     HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);		//VRef is set to high  
        
      
}


void Stepper(int32_t steps, uint32_t delay)
{
	int32_t i;

	if (steps < 0)	// check if going backwards
	{
		steps = ~steps;	// change the value to positive number since stepper handles the reverse via GPIOA pin 10
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,1);		//FR is set to high - anticlockwise rotation
	       
	}
	else if(steps > 0)
	{
		HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,0);		//FR is set to low - clockwise rotation
	}
	else							//disabling the motor
	{
         HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,0);		//rst is high for motor off
         HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);		//oe is low for motor off
        }
           
   	
	HAL_TIM_Base_Start_IT(&tim11); 
	
	// cause the stepper to move "steps" with a small delay between each step
	for (i = 0; i < steps; i++)
	{
	 HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_14);        //STEP is toggled
	 TIM11->CNT = 0;      				// To Reset the counter
	 while (TIM11->CNT < delay) 
	 {  						// wait until number of microseconds occurs
		asm  volatile  ("nop\n");
	 }
	  WDTFeed();

	}
}


ParserReturnVal_t CmdStepperInit(int action)
{

    if (action == CMD_SHORT_HELP)
        return CmdReturnOk;
    if (action == CMD_LONG_HELP)
    {
        printf("timinit\n\n"
               "This command initialize timer 11\n");

        return CmdReturnOk;
    }
    init(); 
    return CmdReturnOk;
}

ADD_CMD("stepperinit", CmdStepperInit, "Initialize Timer 11")



ParserReturnVal_t CmdStepperEnable(int mode)
{
  uint32_t val,rc;
  
  if((mode != CMD_INTERACTIVE)) return CmdReturnOk;

  rc = fetch_uint32_arg(&val);					//fetches value from cmd line in minicom
  
  if(rc) {
    printf("Please supply 1 | 0 to enable or disable the stepper motor\n");
    return CmdReturnBadParameter1;
  }
  
  val = val ? 1 : 0;
  
  if(val == 1)					//motor enabled - operation mode
  {
  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,0);				
  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,1);
  }
  else						//motor disabled - reset / standby mode
  {
  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,1);				
  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_3,0);
  HAL_TIM_Base_Stop(&tim11);  
  }
  
  return CmdReturnOk;
}
ADD_CMD("stepperenable",CmdStepperEnable,"0 | 1   to control GPIO Pin states as off and on")




ParserReturnVal_t CmdStep(int mode)
{
	int rc;
	int32_t steps;
	uint32_t delayVal;

	if (mode != CMD_INTERACTIVE) return CmdReturnOk;

	rc = fetch_int32_arg(&steps);
	if (rc) {
		printf("Specify the steps\n");
		return CmdReturnBadParameter1;
	}

	rc = fetch_uint32_arg(&delayVal);
	if (rc) {
		printf("Specify the delayVal\n");
		return CmdReturnBadParameter1;
	}

	// execute our command to have stepper work
	Stepper(steps, delayVal);
	return CmdReturnOk;
}

// user command to give input values for steps and delay
ADD_CMD("step", CmdStep, "<steps> <delayVal>     stepper motor")




ParserReturnVal_t CmdAngle(int mode)
{
	int rc;
	int32_t angle;
	int32_t steps;
	uint32_t delayVal;
	

	if (mode != CMD_INTERACTIVE) return CmdReturnOk;

	rc = fetch_int32_arg(&angle);
	if (rc) {
		printf("Specify the Angle\n");
		return CmdReturnBadParameter1;
	}

	rc = fetch_uint32_arg(&delayVal);
	if (rc) {
		printf("Specify the delayVal\n");
		return CmdReturnBadParameter1;
	}
	steps = angle * 9;
	Stepper(steps, delayVal);
	return CmdReturnOk;
}

// user command to give input values for Angle and delay
ADD_CMD("angle", CmdAngle, "<Angles> <delayVal>     stepper motor")