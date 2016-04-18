#include "stm32f10x.h"
#include "led.h"

void Delay(__IO u32 nCount);

int main(void) 
{ 
	LED_GPIO_Config();
	
	while(1)
	{
		LED1( ON );
		Delay(0x0FFFEF);
		LED1( OFF );
		LED2( ON );
		Delay(0x0FFFEF);
		LED2( OFF );
		LED3( ON );
		Delay(0x0FFFEF);
		LED3( OFF );
		LED4( ON );
		Delay(0x0FFFEF);
		LED4( OFF );
	}
	
}

void Delay(__IO u32 nCount) //简单的延时函数
{
	for(; nCount != 0; nCount--);
}