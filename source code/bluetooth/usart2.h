#ifndef __USRAT2_H
#define __USRAT2_H 
#include "sys.h"	  	

#define USART_Rx_LEN  	 200  	           //�����������ֽ��� 200
#define USART_Tx_LEN     200
#define EN_USART1_RX     1		           //ʹ�ܣ�1��/��ֹ��0������1����
#define USART2_Waiting   0
#define USART2_Receiving 1
#define USART2_Success   2 
#define USART2_Failed    3

void changePID (float *kp,float *ki,float * kd);
void carControl(void);
void pidControl(void);

void uart2_init       (u32 bound);
void USART2_IRQHandler(void);
void Uart2SendByte    (char byte);         //���ڷ���һ���ֽ�
void Uart2SendBuf     (char *buf, u16 len);
void Uart2SendStr     (char *str);
void BluetoothCMD     (int Uart_Receive);

#endif

