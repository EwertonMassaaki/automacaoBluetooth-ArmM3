#include "usart.h"
#include "stm32f10x_conf.h"

	void GPIO_USART3 (void){
			RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOB, ENABLE);
			GPIO_InitTypeDef GPIO_InitStructure;
			/* Configura USART3 Tx (PB.10) */
			GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
			GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
			GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
			GPIO_Init(GPIOB, &GPIO_InitStructure);
			/* Configura USART3 Rx (PB.11) como input floating */
			GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
			GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
			GPIO_Init(GPIOB, &GPIO_InitStructure);
	}

	void USART_conf () {
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

	USART_InitTypeDef USART_InitStructure;
	USART_InitStructure.USART_BaudRate = 9600;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl =
	USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_Init(USART3, &USART_InitStructure);

	USART_Cmd(USART3, ENABLE); // Enable USART3
	}

	void NIVIC_Config (uint8_t canal, FunctionalState estado) {
		NVIC_InitTypeDef nVICKY;
		NVIC_PriorityGroupConfig (NVIC_PriorityGroup_0); // 4 bits para sub-prioridade 0 bits para prioridade

		nVICKY.NVIC_IRQChannel = canal;
		nVICKY.NVIC_IRQChannelCmd = estado;
		nVICKY.NVIC_IRQChannelPreemptionPriority = 15; // Não importa, só há sub-prioridade, então a menor
		nVICKY.NVIC_IRQChannelSubPriority = 0; // Maior sub-prioridade possível
		NVIC_Init(&nVICKY);
	}
