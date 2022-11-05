/*
 * Button2.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


extern int button2_flag ;

void getKeyInput2() ;


#endif /* INC_BUTTON2_H_ */
