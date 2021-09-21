/* example.c:
 *
 *   Template code for implementing a simple task, using the ADD_TASK()
 *   macro.  Also contains template code for a simple monitor command.
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "common.h"

void ExampleInit(void *data)
{

  /* Place Initialization things here.  This function gets called once
   * at startup.
   */

}

void ExampleTask(void *data)
{

  /* Place your task functionality in this function.  This function
   * will be called repeatedly, as if you placed it inside the main
   * while(1){} loop.
   */

}

ADD_TASK(ExampleTask,  /* This is the name of the function for the task */
	 ExampleInit,  /* This is the initialization function */
	 NULL,         /* This pointer is passed as 'data' to the functions */
	 0,            /* This is the number of milliseconds between calls */
	 "This is the help text for the task")
  

ParserReturnVal_t CmdExample(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  /* Put your command implementation here */
  printf("Hello World!\n");
  
  return CmdReturnOk;
}

ADD_CMD("example",CmdExample,"                Example Command")
