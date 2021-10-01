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
#include "stm32f4xx_hal_adc.h"
#include "stm32f4xx_hal_adc_ex.h"

#define PBSTR "||||||"
#define PBWIDTH 6

 ADC_HandleTypeDef hdac1;


/**
  * @brief Prints graph on the console.
  * @param void
  * @retval void 
  */
void printProgress(double percentage) {
    int val = (int) (percentage);
    int lpad = (int) (percentage * PBWIDTH);
    int rpad = PBWIDTH - lpad;
    printf("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");
    fflush(stdout);
}

/**
  * @brief initialize the adc pins.
  * @param int channel
  * @retval void 
  */
void ADCInit(){
  HAL_StatusTypeDef rc;
 
 __HAL_RCC_GPIOC_CLK_ENABLE();
 GPIO_InitTypeDef  GPIO_InitStruct;

 /* Configure these ADC pins in analog mode using HAL_GPIO_Init() */
 GPIO_InitStruct.Pin = (GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2);
 GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
 GPIO_InitStruct.Pull = GPIO_NOPULL;
 GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
 GPIO_InitStruct.Alternate = 0;
 HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

 /* Initialize ADC */
 __HAL_RCC_ADC1_CLK_ENABLE();
 hdac1.Instance = ADC1;
 hdac1.Init.ClockPrescaler = ADC_CLOCK_SYNC_PCLK_DIV4;
 hdac1.Init.Resolution = ADC_RESOLUTION_12B;
 hdac1.Init.ScanConvMode = DISABLE;
 hdac1.Init.ContinuousConvMode = DISABLE;
 hdac1.Init.DiscontinuousConvMode = DISABLE;
 hdac1.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
 hdac1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
 hdac1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
 hdac1.Init.NbrOfConversion = 1;
 hdac1.Init.DMAContinuousRequests = DISABLE;
 hdac1.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
// hdac1.Init.Overrun = ADC_OVR_DATA_OVERWRITTEN;

 /*return code if adc initialization fails*/ 
 rc = HAL_ADC_Init(&hdac1);
 if(rc != HAL_OK) 
 {
  printf("ADC1 initialization failed with rc=%u\n",rc);
 }
}
/**
  * @brief reads any of the two channel ADC.
  * @param int channel
  * @retval reading of the selected adc channel, returns -1 if selected channel other then 10 or 11 are selected 
  */

 int getReadingFromAdc(int channel)
 {
  
  uint32_t val;
  HAL_StatusTypeDef rc;
  ADC_ChannelConfTypeDef adcChannelConfig;
 
  if(channel == 10){

  adcChannelConfig.Channel = ADC_CHANNEL_10;

  } else if (channel == 11) {
  
  adcChannelConfig.Channel = ADC_CHANNEL_11;

  } else {
    return -1;
  }
    
  adcChannelConfig.Rank = 1;     
  adcChannelConfig.SamplingTime = ADC_SAMPLETIME_15CYCLES;

  //checking and logging if config falied to apply and returning.
  rc = HAL_ADC_ConfigChannel(&hdac1,&adcChannelConfig);
  if(rc != HAL_OK) {
  printf("ADC : channel configuration failed. returned: %u\n",(unsigned)rc);
  return 0;
  }
 
  /* Init ADC */
  rc = HAL_ADC_Start(&hdac1);
  if(rc != HAL_OK) {
  printf("ADC : Init failed. returned : %u\n",(unsigned)rc);
  return 0;
  }
 
  /* getting conversion value */
  rc = HAL_ADC_PollForConversion(&hdac1, 100);
  if(rc != HAL_OK) {
  printf("ADC : poll for conversion failed. returned: %u\n",(unsigned)rc);
  return 0;
  }
 
  /* Read adc pin */
  val = HAL_ADC_GetValue(&hdac1);
 
  /* Stop the adc processing in core */
  rc = HAL_ADC_Stop(&hdac1);
  if(rc != HAL_OK) 
  {
   printf("ADC: Couldn't stop adc. returned: %u\n",(unsigned)rc);
   return 0;
  }
  return val;
 }


  

/**
  * @brief GPIO Event checker, This function allows user to take turn on or off action on various GPIOs.
  * @param int mode of the event, does it require interaction?
  * @retval ParserReturnVal_t enum. 
  */

ParserReturnVal_t AdcEvent(int mode)
{
  
  if(mode != CMD_INTERACTIVE) return CmdReturnOk;

  uint32_t channel;
  uint32_t rc1;
  uint32_t rawAdcValue;
  double voltage;
 
  rc1=fetch_uint32_arg(&channel);
  if(rc1)
  {
    printf("ADC channel not provided.\n");
    return CmdReturnBadParameter1;
  }
  
 ADCInit();


      rawAdcValue = getReadingFromAdc(channel);
      voltage = ((3.3*rawAdcValue)/4096);
      printf("ADC : %ld Voltage : %f\r\n", rawAdcValue, voltage);
      printProgress(voltage);
      printf("\n");
      // Important : Do not remove. otherwise code will halt.
      WDTFeed(); 
  

   

  return CmdReturnOk;
}

ADD_CMD("adc",AdcEvent,"                get readings of devices connected to analogue \n\t\t\t\tpins on Channel 10 and 11")
