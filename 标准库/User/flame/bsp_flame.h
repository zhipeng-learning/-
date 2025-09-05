#ifndef __BSP_FLAME_H
#define	__BSP_FLAME_H


#include "stm32f10x.h"

// ADC ���ѡ��
// ������ ADC1/2�����ʹ��ADC3���ж���ص�Ҫ�ĳ�ADC3��
#define    ADC_APBxClock_FUN             RCC_APB2PeriphClockCmd
#define    ADCx                          ADC1
#define    ADC_CLK                       RCC_APB2Periph_ADC1

// ADC GPIO�궨��
// ע�⣺����ADC�ɼ���IO����û�и��ã�����ɼ���ѹ����Ӱ��
#define    ADC_GPIO_APBxClock_FUN        RCC_APB2PeriphClockCmd
#define    ADC_GPIO_CLK                  RCC_APB2Periph_GPIOA  
#define    ADC_PORT                      GPIOA
#define    ADC_PIN                       GPIO_Pin_4
// ADC ͨ���궨��
#define    ADC_CHANNEL                   ADC_Channel_4

// ADC �ж���غ궨��
#define    ADC_IRQ                       ADC1_2_IRQn
#define    ADC_IRQHandler                ADC1_2_IRQHandler

// DO ������GPIO�궨��
#define    Flame_GPIO_APBxClock_FUN      RCC_APB2PeriphClockCmd
#define    Flame_GPIO_CLK                RCC_APB2Periph_GPIOA
#define    Flame_PORT                    GPIOA
#define    Flame_PIN                     GPIO_Pin_5

void Flame_Init(void);


#endif /* __BSP_FLAME_H */

