/*
 * motorControl.h
 *
 *  Created on: Sep 3, 2024
 *      Author: ludov
 */

#ifndef INC_MOTORCONTROL_H_
#define INC_MOTORCONTROL_H_



#endif /* INC_MOTORCONTROL_H_ */

#define MOTORROTATION_PIN1		2
#define MOTORROTATION_GPIOBUS1	GPIOA
#define MOTORROTATION_PIN2		3
#define MOTORROTATION_GPIOBUS2	GPIOA

static void rotateMotor(motorCommand_e command_e);

typedef enum {
	noCommand = 0,
	clockWise,
	counterClockWise,

	motorCommandNB
} motorCommand_e;
