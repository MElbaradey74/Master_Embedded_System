/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mohamed_Elbaradey
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Platform_types.h"

#define RCC_BASE 0x40021000
#define PorTA_BASE 0x40010800

#define RCC_APB2ENR  *((volatile uint32_t *) (RCC_BASE + 0x18))
#define GPIOA_ODR    *((volatile uint32_t *) (PorTA_BASE + 0x0c))
#define GPIOA_CRH    *((volatile uint32_t *) (PorTA_BASE + 0x04))

#define RCC_IPAEN (1<<2)
#define GPIOA13   (1UL<<13)

typedef union
{
	vuint32_t all_fields ;
	struct
	{
		vuint32_t reserved : 13 ;
		vuint32_t p_13     : 1  ;
	}pin;
}R_ODR_T;

volatile R_ODR_T* R_ODR = (volatile R_ODR_T*)(PorTA_BASE + 0x0c);

int main(void)
{
	RCC_APB2ENR |= RCC_IPAEN ;
	GPIOA_CRH   &= 0xff0fffff;
	GPIOA_CRH   |= 0X00200000;

	while(1)
	{
		R_ODR->pin.p_13 = 1 ; ///set bit 13
		for(int i =0 ; i < 1000 ; i++ );
		R_ODR->pin.p_13 = 0 ; ///set bit 13
		for(int i =0 ; i < 1000 ; i++ );
	}
	return 0 ;
}
