/* tasking.c:
 *
 *   Simple task driver.  Uses a list stored in the 'tasklist' section
 * to call tasks one at a time. To add a task to the list, use the
 * ADD_TASK() macro.  This will add a new task onto the task list.
 * Each task is implemented with a void function that should take a
 * void pointer argument to user data. This task driver is simply a
 * task executive, and because of that, it expects every task to
 * return when it completes its functionality.  Do not put busy waits
 * inside of tasks as this will slow down the whole system.
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "common.h"

/* Task list, *_start and *_end symbols are filled in by the linker */
extern const TaskingTable_t _tasktable_start[];
extern const TaskingTable_t _tasktable_end[];
extern TaskingState_t _taskstate_start[];
extern TaskingState_t _taskstate_end[];


/* Initialize the task system, call all the init functions */
void TaskingInit(void)
{
  const TaskingTable_t *p;
  TaskingState_t *s;
  
  p = _tasktable_start;
  s = _taskstate_start;
  while(p != _tasktable_end) {
    s->interval = 0;    /* Expire all task intervals */
    if(p->initFunc != NULL) {
      /* Call function */
      p->initFunc(p->data);
    }
    p++;
    s++;
  }
}

/* Called from Systick Handler to accumulate ticks */
static volatile uint32_t AccumTicks;
void TaskingTickHandler(void)
{
  AccumTicks++;
}


/* Run all the tasks once. */
void TaskingRun(void)
{
  const TaskingTable_t *p;
  TaskingState_t *s;
  uint32_t ticks,i;

  __disable_irq();
  ticks = AccumTicks;
  AccumTicks = 0;
  __enable_irq();

  p = _tasktable_start;
  s = _taskstate_start;
  while(p != _tasktable_end) {
    if(p->func != NULL) {
      /* If this task has no interval, run it every time */
      if(p->interval == 0) {
	/* Call function */
	p->func(p->data);
      } else {
	/* This task has a timer interval */
	i = ticks;
	while(i--) { /* This could be better... if ticks > interval... */
	  /* Decrement interval */
	  if(s->interval) {
	    s->interval--;
	  }
	  /* Ready to run? */
	  if(s->interval == 0) {
	    p->func(p->data);
	    s->interval = p->interval; /* Reset timer */
	  }
	}
      }
    }
    p++;
    s++;
  }
}

ParserReturnVal_t CmdTasks(int mode)
{
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  const TaskingTable_t *p;
  uint32_t i;

  printf("Currently defined tasks:\n");
  p = _tasktable_start;
  i = 0;
  while(p != _tasktable_end) {
    printf("%2ld: %20s (%lu) -- %s\n",
	   i, p->name, p->interval, p->desc);
    p++;
    i++;
  }
  return CmdReturnOk;
}

ADD_CMD("tasks",CmdTasks,"                Dump task list")


#ifdef TEST_TASK
static void TestTask(void *data)
{
}
static void TestTaskInit(void *data)
{
}
ADD_TASK(TestTask,TestTaskInit,NULL,"Test task from tasking.c")
#endif
