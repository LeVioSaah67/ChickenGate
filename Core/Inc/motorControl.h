/*
 * motorControl.h
 *
 *  Created on: Sep 3, 2024
 *      Author: ludov
 */

#ifndef INC_MOTORCONTROL_H_
#define INC_MOTORCONTROL_H_



#endif /* INC_MOTORCONTROL_H_ */

#include <stdint.h>
#include "main.h"




typedef enum {
	noCommand = 0,
	clockWise,
	counterClockWise,

	motorCommandNB
} motorCommand_e;

void rotateMotor(motorCommand_e command_e, uint16_t alpha);

