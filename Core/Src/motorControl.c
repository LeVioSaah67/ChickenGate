/*
 * motorControl.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ludov
 */
#include "motorControl.h"

#define MOTORROTATION_PIN1		2
#define MOTORROTATION_GPIOBUS1	GPIOA
#define MOTORROTATION_PIN2		3
#define MOTORROTATION_GPIOBUS2	GPIOA

extern TIM_HandleTypeDef htim2;

void rotateMotor(motorCommand_e command_e, uint16_t alpha)
{
	// Change motor direction
	switch(command_e)
	{
	case noCommand:
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS1, MOTORROTATION_PIN1, 0);
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS2, MOTORROTATION_PIN2, 0);
		break;
	case clockWise:
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS1, MOTORROTATION_PIN1, 1);
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS2, MOTORROTATION_PIN2, 0);
		break;
	case counterClockWise:
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS1, MOTORROTATION_PIN1, 0);
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS2, MOTORROTATION_PIN2, 1);
		break;
	case motorCommandNB:
	default:
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS1, MOTORROTATION_PIN1, 0);
		HAL_GPIO_WritePin(MOTORROTATION_GPIOBUS2, MOTORROTATION_PIN2, 0);
		break;
	}
	// Change alpha value of TIM2
	if(alpha > 0)
	{
		alpha *= 8;
		if(alpha > 800)
		{
			alpha = 800;
		}
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, alpha);
	}
	else
	{
		alpha = 0;
	}
}
