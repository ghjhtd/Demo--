#ifndef __USART_H
#define __USART_H
 /**************************************************************************
作者：平衡小车之家 
淘宝店铺：http://shop114407458.taobao.com/
**************************************************************************/
#include "sys.h"
#include "stdio.h"	 
void usart1_send(u8 data);
void uart_init(u32 pclk2,u32 bound);
	   

#define USART2_REC_LEN  			200  	//????????? 200
#define EN_USART2_RX 			1		//??(1)/??(0)??1??
	 
#define USART1_REC_LEN  			200  	//????????? 200
#define EN_USART1_RX 		
extern u8  USART1_RX_BUF[USART2_REC_LEN]; //????,??USART_REC_LEN???.??????? 
extern u16 USART1_RX_STA;      
extern u8  USART2_RX_BUF[USART2_REC_LEN]; //????,??USART_REC_LEN???.??????? 
extern u16 USART2_RX_STA;         		//??????	
//?????????,??????????

#define USART3_REC_LEN  			200  	//????????? 200
#define EN_USART3_RX 			1		//??(1)/??(0)??1??
	  	
extern u8  USART3_RX_BUF[USART3_REC_LEN]; //????,??USART_REC_LEN???.??????? 
extern u16 USART3_RX_STA;         		//??????	
//?????????,??????????
void uart2_init(u32 bound);
void uart3_init(u32 bound);
void uart1_init(u32 bound);
#endif















