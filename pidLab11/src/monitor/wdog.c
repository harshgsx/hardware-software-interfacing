/* wdog.c:
 *
 *    Watchdog functions.
 *
 */
#include <stdio.h>

#include "common.h"
#if defined(HAL_IWDG_MODULE_ENABLED)
extern IWDG_HandleTypeDef hiwdg;
#endif

/* Check the reset source and print out some messages to help the user */
void WDTCheckReset(void)
{
  uint32_t csr;

  /* Read the RCC Control Staus Register */
  csr = RCC->CSR;
  if(csr & 0xfe000000) {
    /* There is at least one reset source */
    printf("\nProcessor reset detected from the following source(s):\n");
#define CHECK_FLAG(flag,msg)				\
    {							\
      if(csr & (flag)) {				\
	printf("\t" msg "\n");				\
      }							\
    } while(0)
    
#ifdef RCC_CSR_LPWRRSTF
    CHECK_FLAG(RCC_CSR_LPWRRSTF, "Low Power");
#endif
#ifdef RCC_CSR_WWDGRSTF
    CHECK_FLAG(RCC_CSR_WWDGRSTF, "Windowed Watchdog");
#endif
#ifdef RCC_CSR_IWDGRSTF
    CHECK_FLAG(RCC_CSR_IWDGRSTF, "Independent Windowed Watchdog");
#endif
#ifdef RCC_CSR_SFTRSTF
    CHECK_FLAG(RCC_CSR_SFTRSTF,  "Software");
#endif
#ifdef RCC_CSR_BORRSTF
    CHECK_FLAG(RCC_CSR_BORRSTF,  "Brownout");
#endif
#ifdef RCC_CSR_PINRSTF
    CHECK_FLAG(RCC_CSR_PINRSTF,  "NRST Pin");
#endif
#ifdef RCC_CSR_OBLRSTF
    CHECK_FLAG(RCC_CSR_OBLRSTF,  "Option Byte Loader");
#endif
#ifdef RCC_CSR_PORRSTF
    CHECK_FLAG(RCC_CSR_PORRSTF,  "Power On");
#endif
#undef CHECK_FLAG
  }

  /* Clear all reset source indications */
  RCC->CSR = RCC_CSR_RMVF;

}

/* Feed the watchdog */
void WDTFeed(void)
{
#if defined(HAL_IWDG_MODULE_ENABLED)
  HAL_IWDG_Refresh(&hiwdg); /* Feed it */
#endif
}
#if defined(HAL_IWDG_MODULE_ENABLED)
void IWDG_IRQHandler(void) {
  register char *stack_ptr asm("sp");
  uint32_t *tos;
  uint32_t i;
  
  tos = (uint32_t *)stack_ptr;
 
  PolledPrintf("%s(): Dumping stack frame\r\n",__FUNCTION__);
  for(i=0; i<16; i++) {
    PolledPrintf("\t%08lx: %08lx\r\n",
		 (uint32_t)tos, *tos);
    tos++;
  }

}
#endif

