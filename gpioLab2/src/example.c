/* example.c:
 *
 *   Template code for implementing a simple task, using the ADD_TASK()
 *   macro.  Also contains template code for a simple monitor command.
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "common.h"
#include "main.h"

void GPIOInit(void *data)
{

  /* Place Initialization things here.  This function gets called once
   * at startup.
   */

   __HAL_RCC_GPIOA_CLK_ENABLE();
   //__HAL_RCC_GPIOB_CLK_ENABLE();
   //__HAL_RCC_GPIOC_CLK_ENABLE();
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = (GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_5 | GPIO_PIN_4);
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = 0;
  HAL_GPIO_Init(LD3_GPIO_Port, &GPIO_InitStruct);
}

void ExampleTask(void *data)
{

  /* Place your task functionality in this function.  This function
   * will be called repeatedly, as if you placed it inside the main
   * while(1){} loop.
   */

}

ADD_TASK(ExampleTask,  /* This is the name of the function for the task */
	 GPIOInit,  /* This is the initialization function */
	 NULL,         /* This pointer is passed as 'data' to the functions */
	 0,            /* This is the number of milliseconds between calls */
	 "This is the help text for the task")
  

ParserReturnVal_t CmdExample(int mode)
{
  uint32_t pinNmber,rc, ledStaus, rc2;
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  /* Put your command implementation here */
  rc = fetch_uint32_arg(&pinNmber);
  printf("pin number : %ld \n", pinNmber);
  
  rc2 = fetch_uint32_arg(&ledStaus);
  printf("Led Status : %ld \n", ledStaus);

  if(rc != -1 && rc2!= -1)
  {
    if(pinNmber == 4)
    {
    if(ledStaus == 1)
    {
      HAL_GPIO_WritePin(LD3_GPIO_Port,GPIO_PIN_4,1);
    }
    else if(ledStaus == 0)
    {
      HAL_GPIO_WritePin(LD3_GPIO_Port,GPIO_PIN_4,0);
    }
    } else if(pinNmber == 5)
    {
    if(ledStaus == 1)
    {
      HAL_GPIO_WritePin(LD3_GPIO_Port,GPIO_PIN_5,1);
    }
    else if(ledStaus == 0)
    {
      HAL_GPIO_WritePin(LD3_GPIO_Port,GPIO_PIN_5,0);
    }
    } 
  }
  return CmdReturnOk;
}

ADD_CMD("es",CmdExample,"                Controls GPIO4, GPIO5 D11 and D12")
