/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2024-xx-xx
  * @brief   
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:Ұ��С�� STM32F103C8 ���İ� 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */ 
#include "stm32f10x.h"
#include "bsp_usart.h"
#include "flame/bsp_flame.h"

//ADC��ת��ֵ
extern __IO uint16_t ADC_ConvertedValue;


// �����ʱ
void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
} 

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
	/* ��ʼ��USART1 ����ģʽΪ 115200 8-N-1 */
	USART_Config();
	
	/* ������ģ���ʼ�� */
	Flame_Init();
	
    printf("\r\n ----����һ��������ģ���ȡ����ʵ��----\r\n");
	
	while (1)
	{	
        printf("������ģ�� ������Ϊ��%d\n",GPIO_ReadInputDataBit(Flame_PORT,Flame_PIN)); 
        printf("������ģ���⵽��ģ����Ϊ��%d\n\n",ADC_ConvertedValue);
        
        if(GPIO_ReadInputDataBit(Flame_PORT,Flame_PIN) == 0)
        {
            printf("����ǿ�ȴﵽ��ֵ\n");
        }
        else
        {
            printf("����ǿ��δ�ﵽ��ֵ\n");
        }
        
        printf("\r\n\r\n");
        Delay(0x1fffee);
	}
}
/*********************************************END OF FILE**********************/
