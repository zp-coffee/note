#ifndef __USRAT2_H
#define __USRAT2_H 
#include "sys.h"	  	

#define USART_Rx_LEN  	 200  	           //定义最大接收字节数 200
#define USART_Tx_LEN     200
#define EN_USART1_RX     1		           //使能（1）/禁止（0）串口1接收
#define USART2_Waiting   0
#define USART2_Receiving 1
#define USART2_Success   2 
#define USART2_Failed    3

void changePID (float *kp,float *ki,float * kd);
void carControl(void);
void pidControl(void);

void uart2_init       (u32 bound);
void USART2_IRQHandler(void);
void Uart2SendByte    (char byte);         //串口发送一个字节
void Uart2SendBuf     (char *buf, u16 len);
void Uart2SendStr     (char *str);
void BluetoothCMD     (int Uart_Receive);

#endif

