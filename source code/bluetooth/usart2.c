#include "usart2.h"
#include "stdio.h"
#include "string.h"
#include "control.h"


u8 USART2_state = USART2_Waiting;  //����״̬���
u8 USART2_Rx_index = 0;            //����2��������λ���������±�
u8 USART2_Tx_index = 0;            //����2��������λ���������±�

int controlFlag = 0;               //����pid�Ϳ���С���ı�־λ
int rxLength = 17;                 //���ݰ��ܳ���
          
unsigned char Usart2Rx_Info[USART_Rx_LEN];   //��Ž������ݵ�����
unsigned char Usart2Tx_Info[USART_Tx_LEN];   //��ŷ������ݵ�����
 


/**************************************************************************
�������ܣ�����2��ʼ��
��ڲ�����bound:������
����  ֵ����
**************************************************************************/
void uart2_init(u32 bound)
{  	 
	//GPIO�˿�����
    GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	 
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //ʹ��UGPIOBʱ��
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE); 	 //ʹ��USART2ʱ��
	//USART2_TX  
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;                //PA2
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	         //�����������
    GPIO_Init(GPIOA, &GPIO_InitStructure);
   
    //USART2_RX	  
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;                //PA3
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;    //��������
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    //USART ��ʼ������
	USART_InitStructure.USART_BaudRate = bound;                                       //���ڲ�����
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;						  //�ֳ�Ϊ8λ���ݸ�ʽ
	USART_InitStructure.USART_StopBits = USART_StopBits_1;                            //һ��ֹͣλ
	USART_InitStructure.USART_Parity = USART_Parity_No;                               //����żУ��λ
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;   //��Ӳ������������
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	                  //�շ�ģʽ
    USART_Init(USART2, &USART_InitStructure);                                         //��ʼ������2
    USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);                                    //�������ڽ����ж�
    USART_Cmd(USART2, ENABLE);                                                        //ʹ�ܴ���2 
}



/**************************************************************************
�������ܣ�����2�����ж�
��ڲ�������
����  ֵ����
**************************************************************************/


void USART2_IRQHandler(void)                	           //����2�жϷ������
{
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)  //�����ж�
	{
		u8 Res;
	    Res = USART_ReceiveData(USART2);     	           //��ȡ���յ�������
		if (Res == '9') 
		{
			controlFlag = !controlFlag;                    //��Ӧ������ģʽ�ı䣩�������л���pidģʽ��С������ģʽ 
			printf("controlFlag = %d\n",controlFlag);
		}
		if (controlFlag == 0)  carControl();               //С������ģʽ
		else if (controlFlag == 1)  pidControl();          //��pidģʽ
	}
} 


/**************************************************************************
�������ܣ��������ݰ���У��
��ڲ�������
����  ֵ����
**************************************************************************/

void pidControl() 
{
	    u8 Res;
	    Res =USART_ReceiveData(USART2);     	                   //��ȡ���յ�������
		if ((USART2_state == USART2_Waiting) && (Res == 'A'))      //�ж�֡ͷ
		{
			USART2_state = USART2_Receiving;                       //֡ͷ��ȷ�͸ı䴮��2��״̬
			USART2_Rx_index = 0;                                   //��������ļ�����
			Usart2Rx_Info[USART2_Rx_index] = Res;                  //����pid���ݵĴ洢
            USART2_Rx_index++;                       
		}
		else if (USART2_state == USART2_Receiving)
		{
			if (USART2_Rx_index < rxLength)
			{
				Usart2Rx_Info[USART2_Rx_index]=Res;
				USART2_Rx_index++;                                                          //û�н������һֱ������ѭ��
				if (USART2_Rx_index == rxLength && Usart2Rx_Info[USART2_Rx_index-1] == 'B') //������ɣ��ж�֡β�����֡β��ȷ���޸�pid
                {   
					
				   changePID(&balance_UP_KP,&balance_UP_KI,&balance_UP_KD);                 //pid�����޸ĺ���

                   USART2_Rx_index = 0;                                                     //���ݳ�����0
                   USART2_state = USART2_Waiting;                                           //����2��״̬�ص��ȴ�״̬
                }
				if (USART2_Rx_index == rxLength && Usart2Rx_Info[USART2_Rx_index-1] != 'B') //������ɣ��ж�֡β�������������½���
                {      
				   printf("PLEASE SET AGAIN");          
                   USART2_Rx_index = 0;                                                     //���ݳ�����0
                   USART2_state = USART2_Waiting;                                           //����2��״̬�ص��ȴ�״̬
                }
			}
		  
		} 
		USART_ClearFlag(USART2,USART_IT_RXNE);                                              //�����־λ
}

/**************************************************************************
�������ܣ�����С���˶�
��ڲ�������
����  ֵ����
**************************************************************************/

void carControl()
{
	u8 Res;
	Res =USART_ReceiveData(USART2);     	                   //��ȡ���յ�������
	printf("in car\r\n");
	switch(Res)
	{
		case '1': VelocityTarget = -30; Turn =   0;   break;   //ǰ��
		case '2': VelocityTarget =   0; Turn = -40;   break;   //����
		case '3': VelocityTarget =   0; Turn =   0;   break;   //ֹͣ
		case '4': VelocityTarget =   0; Turn =  40;   break;   //����
		case '5': VelocityTarget =  30; Turn =   0;   break;   //����
		case '6': VelocityTarget +=  5; Turn =   0;   break;   //����
		case '7': VelocityTarget -=  5; Turn =   0;   break;   //����
		default : break;
	}
}	

/**************************************************************************
�������ܣ��޸�pid����
��ڲ�����*kp:Ҫ�޸ĵ�kpֵ��ָ��,*kp:Ҫ�޸ĵ�kpֵ��ָ��,*kp:Ҫ�޸ĵ�kpֵ��ָ��
����  ֵ����
**************************************************************************/


void changePID(float *kp,float *ki,float * kd)
{
	int i = 1;
	printf("in pid\r\n");                                          //����4��Ϊ�����������ת��Ϊ4λ������1λС��
	balance_UP_KP=0,balance_UP_KI=0,balance_UP_KD=0;
	for (;i<=5;)  if (i == 5)  {*kp = *kp + (Usart2Rx_Info[i++] - 48) * 1.0 / 10;} else {*kp = *kp * 10 + (Usart2Rx_Info[i++] - 48);}
	for (;i<=10;) if (i == 10) {*ki = *ki + (Usart2Rx_Info[i++] - 48) * 1.0 / 10;} else {*ki = *ki * 10 + (Usart2Rx_Info[i++] - 48);}
	for (;i<=15;) if (i == 15) {*kd = *kd + (Usart2Rx_Info[i++] - 48) * 1.0 / 10;} else {*kd = *kd * 10 + (Usart2Rx_Info[i++] - 48);}
	balance_UP_KP=-balance_UP_KP;                                  //��������Լ�pid�����ļ���������
	balance_UP_KI=-balance_UP_KI;                                  //�����ҵ�pid����ȫ�Ǹ��ģ����Զ�����һ������
	balance_UP_KD=-balance_UP_KD;
	printf("%f,%f,%f",balance_UP_KP,balance_UP_KI,balance_UP_KD);  //���ڲ鿴�ǲ���Э����ȷ
}

/**************************************************************************
�������ܣ�����2��������
��ڲ�����byte���ֽ�
����  ֵ����
**************************************************************************/

void Uart2SendByte(char byte)                                    //���ڷ���һ���ֽ�
{
		USART_SendData(USART2, byte);                            //ͨ���⺯��  ��������
		while( USART_GetFlagStatus(USART2,USART_FLAG_TC)!= SET);  
		//�ȴ�������ɡ�   ��� USART_FLAG_TC �Ƿ���1��          //���⺯�� P359 ����
}

/**************************************************************************
�������ܣ�����2��������
��ڲ�����*buf���ַ����ĵ�ַ��len���ַ����ĳ���
����  ֵ����
**************************************************************************/

void Uart2SendBuf(char *buf, u16 len)
{
	u16 i;
	for(i=0; i<len; i++)Uart2SendByte(*buf++);
}

/**************************************************************************
�������ܣ�����2��������
��ڲ�����byte���ַ���
����  ֵ����
**************************************************************************/

void Uart2SendStr(char *str)
{
	u16 i,len;
	len = strlen(str);
	for(i=0; i<len; i++)Uart2SendByte(*str++);
}
