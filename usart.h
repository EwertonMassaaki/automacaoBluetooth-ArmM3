#ifndef __usart
#define __usart
#include "stm32f10x_conf.h"

void GPIO_USART3 (void);
void USART_conf (void);
void NIVIC_Config (uint8_t canal, FunctionalState estado);

#endif
