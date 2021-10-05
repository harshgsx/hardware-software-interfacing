/* terminal.inc: -*-c-*-
 *
 *   Definitiions for the terminal interfaces.
 *
 */

#ifndef TERMINAL
#define TERMINAL(name,periph,irq,desc)
#endif
#ifdef STM32L432xx
TERMINAL(CONSOLE, USART2, USART2,"Console")
#endif
#ifdef STM32F303xE
TERMINAL(CONSOLE, USART2, USART2,"Console")
#endif
#ifdef STM32G474xx
TERMINAL(CONSOLE, USART3, USART3,"Console")
#endif
#ifdef STM32F411xE
TERMINAL(CONSOLE, USART2, USART2,"Console")
#endif
#undef TERMINAL
  
