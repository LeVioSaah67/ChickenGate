/*
 * motorControl.h
 *
 *  Created on: Sep 3, 2024
 *      Author: ludov
 */

#ifndef INC_MOTORCONTROL_H_
#define INC_MOTORCONTROL_H_



#endif /* INC_MOTORCONTROL_H_ */

static void rotateMotor(motorCommand_e command_e);

typedef enum {
	noCommand = 0,
	clockWise,
	counterClockWise,

	motorCommandNB
} motorCommand_e;
