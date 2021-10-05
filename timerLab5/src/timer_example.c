/*******************************************************************************
  * File Name          : adc_example.c
  * Description        : Allows user to view graphically the value of adc pins A4, A5.
                       : This src code follows the template provided in the stm32montor.
                       : It also takes the ref from the following websites. 
                       : https://stackoverflow.com/questions/14539867/how-to-display-a-progress-indicator-in-pure-c-c-cout-printf
                       : https://www.mccdaq.com/PDFs/specs/Analog-to-Digital.pdf
                       : https://learn.sparkfun.com/tutorials/analog-to-digital-conversion/relating-adc-value-to-voltage 
  * Author             : Harsh Hirenbhai Shah
                       : Arsh Sandhu
  * Date               : Oct-1-2021
  ******************************************************************************
  */

#include <stdio.h>
#include <stdint.h>

#include "common.h"
#include "main.h"


/**
  * @brief initialize the timer pins.
  * @param int channel
  * @retval void 
  */
void timerInit(){
  
}
/**
  * @brief reads any of the two channel ADC.
  * @param int channel
  * @retval reading of the selected adc channel, returns -1 if selected channel other then 10 or 11 are selected 
  */

 int getReadingFromAdc(int channel)
 {
  
  uint32_t val;

  return val;
 }


  

/**
  * @brief GPIO Event checker, This function allows user to take turn on or off action on various GPIOs.
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */

ParserReturnVal_t timerEvent(int mode)
{
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;


  return CmdReturnOk;
}

ADD_CMD("tdelay",timerEvent,"                timerdelay <delay>")
