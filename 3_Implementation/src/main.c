#include "MyStm32f407xx.h"
#include <stdint.h>
#include <stdio.h>
#define BTN_PRESSED ENABLE

void delay(void);
void igniton_on(void);
void igniton_off(void);
void Clockwise(void);
void wiper_off(void);


#define ADC_BASE_ADDR               0X40012000UL
#define ADC_CR1_REG_OFFSET          0X04UL
#define ADC_CR1_REG_ADDR             (ADC_BASE_ADDR + ADC_CR1_REG_OFFSET)

#define RCC_BASE_ADDR                 0X4002300UL
#define RCC_APB2_ENR_OFFSET           0X44UL
#define RCC_APB2_ENR_ADDR             (RCC_BASE_ADDR + RCC_APB2_ENR_OFFSET)

int main(void)

{
   uint32_t *pRccApb2Enr = (uint32_t*) RCC_APB2_ENR_ADDR;

   uint32_t *pAdcCr1Reg = (uint32_t*) ADC_CR1_REG_ADDR;

   *pRccApb2Enr |= (1<<8);

   *pAdcCr1Reg |=(1<<8);

    for(;;);
}
