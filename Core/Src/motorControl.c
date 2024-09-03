/*
 * motorControl.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ludov
 */

static void rotateMotor(motorCommand_e command_e)
{
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
}
