/*
 * Button3.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "main.h"


#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


extern int button3_flag ;
void getKeyInput3() ;

#endif /* INC_BUTTON3_H_ */
