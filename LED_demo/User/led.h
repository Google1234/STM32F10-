#ifndef __LED_H
#define	__LED_H

#include "stm32f10x.h"

#define ON 0
#define OFF 1

#define LED1(a) if (a) \
	GPIO_SetBits(GPIOB,GPIO_Pin_3);\
  else \
	GPIO_ResetBits(GPIOB,GPIO_Pin_3)
#define LED2(a) if (a) \
	GPIO_SetBits(GPIOB,GPIO_Pin_4);\
	else \
	GPIO_ResetBits(GPIOB,GPIO_Pin_4)
#define LED3(a) if (a) \
	GPIO_SetBits(GPIOB,GPIO_Pin_5);\
	else \
	GPIO_ResetBits(GPIOB,GPIO_Pin_5)
#define LED4(a) if (a) \
	GPIO_SetBits(GPIOB,GPIO_Pin_6);\
	else \
	GPIO_ResetBits(GPIOB,GPIO_Pin_6)
void LED_GPIO_Config(void);
#endif /* __LED_H */