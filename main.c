#include "stm32f10x_conf.h"
#include "usart.h"
#include "saida.h"

#define _ON 0
#define _OFF 1

char Rec_Com;

int main(void){

	USART_conf ();
	Rec_Com = 'z'; //comando recebe caracter nao reservado para comunicacao
	int porta=-1;
	inicia_portas() ;	//inicializa a GPIO
	GPIO_USART3 ();	//inicializa a USART3
	USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);  //seleciona a interrupcao RXNE da USART
	NIVIC_Config(USART3_IRQn, ENABLE);							//configura a NVIC com a interrupcao da USART

    while(1)
    {
	if (Rec_Com != 'z') {	//Compara o caractere recebido

    		porta= Rec_Com;
    			switch (porta) {
    				case '1':
     					GPIO_WriteBit(GPIOC, Out1, GPIO_ReadOutputDataBit(GPIOC, Out1)^1); //Comando 1
    					Rec_Com = 'z';
    					USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
    					break;
    				case '2':
    					GPIO_WriteBit(GPIOC, Out2, GPIO_ReadOutputDataBit(GPIOC, Out2)^1); //Comando 2
    		    		Rec_Com = 'z';
    		    		USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
    					break;
    				case '3':
    					GPIO_WriteBit(GPIOC, Out3, GPIO_ReadOutputDataBit(GPIOC, Out3)^1); //Comando 3
    					Rec_Com = 'z';
    		    		USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
    					break;
    				case '4':
    					GPIO_WriteBit(GPIOC, Out4, GPIO_ReadOutputDataBit(GPIOC, Out4)^1); //Comando 4
    					Rec_Com = 'z';
    		    		USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
    					break;
    				default:
    					USART_ITConfig(USART3, USART_IT_RXNE, ENABLE); //default
    					Rec_Com = 'z';
    					break;
    			}//switch
    }//if
}
}


void USART3_IRQHandler(void) {
	char rec_char = USART_ReceiveData(USART3);	// Recebe um caractere
	USART_SendData(USART3, rec_char);				//envia um caractere
	if ((rec_char=='1')||(rec_char=='2')||(rec_char=='3')||(rec_char=='4')){		//seleciona o comando
		Rec_Com=rec_char;
		USART_ITConfig(USART3, USART_IT_RXNE, DISABLE);	
	}
}
