#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>
#define BTN_PRESSED ENABLE
#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)
#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)
#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)
#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)
#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)

int main()
{
		GPIO_Handle_t GpioLed, GpioLed1, GpioLed2, GpioLed3, GpioBtn;


	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);


	GpioLed1.pGPIOx = GPIOD;
	GpioLed1.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	GpioLed1.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed1.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed1.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed1);


	GpioLed2.pGPIOx = GPIOD;
	GpioLed2.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	GpioLed2.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed2.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed2.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed2);


	GpioLed3.pGPIOx = GPIOD;
	GpioLed3.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	GpioLed3.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed3.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed3.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed3);


	GpioBtn.pGPIOx = GPIOA;
	GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GpioBtn);
         int i, j;
	uint32_t flag = 0;
	uint32_t key_pressed = 0;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1) 
					{
						b++;
					}
					if(b>30000)
				    {
					b=0;
					GPIOD_ODR |= 1<<14;
					for(i=0;i<100000;i++);
					}
					else if(b>0 && b<30000)
					{
					j=1;
                    }
					else
					{

					}
						if(j==1)
						{


				        for(j=0;j<5;j++) 
						{
						GPIOD_ODR |= 1<<12;
						for(i=0;i<20000;i++);
						GPIOD_ODR &= ~(1<<12);
						for(i=0;i>=20000;i++);
						}
						for(j=0;j<5;j++)  
						{
						GPIOD_ODR |= 1<<13;
						for(i=0;i<20000;i++);
						GPIOD_ODR &= ~(1<<13);
					    for(i=0;i>=20000;i++);
						}
						for(j=0;j<5;j++)   
						{
						GPIOD_ODR |= 1<<15;
						for(i=0;i<20000;i++);
						GPIOD_ODR &= ~(1<<15);
						for(i=0;i>=20000;i++);
						}

						for(j=0;j<5;j++) 
						{
						GPIOD_ODR |= 1<<12;
						for(i=0;i<40000;i++);
						GPIOD_ODR &= ~(1<<12);
						for(i=0;i>=40000;i++);
						}
						for(j=0;j<5;j++)  
						{
						GPIOD_ODR |= 1<<13;
						for(i=0;i<40000;i++);
						GPIOD_ODR &= ~(1<<13);
						for(i=0;i>=40000;i++);
						}
						for(j=0;j<5;j++)  
						{
						GPIOD_ODR |= 1<<15;
						for(i=0;i<40000;i++);
					    GPIOD_ODR &= ~(1<<15);
						for(i=0;i>=40000;i++);
						}
						

						for(j=0;j<5;j++)  
					    {
						GPIOD_ODR |= 1<<12;
						for(i=0;i<80000;i++);
						GPIOD_ODR &= ~(1<<12);
						for(i=0;i>=80000;i++);
						}
						for(j=0;j<5;j++)  
						{
						GPIOD_ODR |= 1<<13;
						for(i=0;i<80000;i++);
						GPIOD_ODR &= ~(1<<13);
						for(i=0;i>=80000;i++);
						}
						for(j=0;j<5;j++)  
						{
						GPIOD_ODR |= 1<<15;
						for(i=0;i<80000;i++);
						GPIOD_ODR &= ~(1<<15);
						for(i=0;i>=80000;i++);
						}

						}

	}
	return 0;
}
