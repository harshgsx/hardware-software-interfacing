/*******************************************************************************
  * File Name          : gpio_example.c
  * Description        : Allows user to toggle GPIOs of Port A.
                       : This src code follows the template provided in the stm32montor. 
  * Author             : Harsh Hirenbhai Shah
                       : Arsh Sandhu
  * Date               : Sep/22/2021
  ******************************************************************************
  */

#include <stdio.h>
#include <stdint.h>

#include "common.h"
#include "main.h"

/**
  * @brief GPIO Initialization Function
  * @param void ptr
  * @retval None
  */
void GPIOInit(void *data)
{

   __HAL_RCC_GPIOA_CLK_ENABLE();
   __HAL_RCC_GPIOB_CLK_ENABLE();
   __HAL_RCC_GPIOC_CLK_ENABLE();
  
  
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_5 | GPIO_PIN_7 | GPIO_PIN_6 | GPIO_PIN_9);
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = 0;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  //printf("Inside INIT Function\n");
}

/**
  * @brief ExampleTask depricated function, Not in use for the following project.
  * @param void ptr
  * @retval None
  */
void ExampleTask(void *data)
{

  /* Place your task functionality in this function.  This function
   * will be called repeatedly, as if you placed it inside the main
   * while(1){} loop.
   */

}

//Registering the task.
ADD_TASK(ExampleTask,  /* This is the name of the function for the task */
	 GPIOInit,  /* This is the initialization function */
	 NULL,         /* This pointer is passed as 'data' to the functions */
	 0,            /* This is the number of milliseconds between calls */
	 "Dummy example task that runs continiously")
  

/**
  * @brief GPIO Event checker, This function allows user to take turn on or off action on various GPIOs.
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */

ParserReturnVal_t GpioEvent(int mode)
{
  uint32_t pinNmber,rc, ledStaus, rc2;
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  rc = fetch_uint32_arg(&pinNmber);
  printf("pin number : %ld \n", pinNmber);
  
  rc2 = fetch_uint32_arg(&ledStaus);
  printf("Led Status : %ld \n", ledStaus);

  if(rc != -1 && rc2!= -1) 
  {
    switch(pinNmber)
    {
      case 9:
      if(ledStaus == 1)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,1);
      }
      else if(ledStaus == 0)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
      }
      else
      {
        printf("Invalid Signal status. GPIO_PIN_9 Provide 0 or 1.\n"); 
      }
      break;
      case 5:
      if(ledStaus == 1)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);
      }
      else if(ledStaus == 0)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
      }
      else
      {
        printf("Invalid Signal status. GPIO_PIN_5 Provide 0 or 1.\n");  
      }
      break;
      case 6:
      if(ledStaus == 1)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,1);
      }
      else if(ledStaus == 0)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
      }
      else
      {
        printf("Invalid Signal status. GPIO_PIN_6 Provide 0 or 1.\n");  
      }
      break;
      case 7:
      if(ledStaus == 1)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,1);
      }
      else if(ledStaus == 0)
      {
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
      }
      else
      {
        printf("Invalid Signal status. GPIO_PIN_7 Provide 0 or 1.\n");  
      }
      break;

      default:
      printf("Other selections are not avaliable. Please select following pins, PA5 (D13), PA6 (D12), PA7 (D11) .\n");
      break;
    }      
  } else {
    printf("Please provide valid arguments! \n");
  }
  return CmdReturnOk;
}

ADD_CMD("gpio",GpioEvent,"                Control D11-D13 with 0 and 1")
