#include "saida.h"
#include "stm32f10x_conf.h"

void inicia_portas (void){
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	//libera o clock na APB2

	GPIO_InitTypeDef GPcargas;	

	GPcargas.GPIO_Mode = GPIO_Mode_Out_PP;
	GPcargas.GPIO_Speed = GPIO_Speed_50MHz;
	GPcargas.GPIO_Pin = Out1|Out2|Out3|Out4;

	GPIO_Init(GPIOC, &GPcargas); // Configura pinos de saída

	GPIO_WriteBit(GPIOC, Out1, _OFF); //Inicializa as portas em OFF
	GPIO_WriteBit(GPIOC, Out2, _OFF);
	GPIO_WriteBit(GPIOC, Out3, _OFF);
	GPIO_WriteBit(GPIOC, Out4, _OFF);
}
