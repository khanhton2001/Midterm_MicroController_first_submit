/*
 * long_pressed.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#include "long_pressed.h"

void fsm_long_pressed_run(){
	switch(status2){

	case 1:

		if(timer4_flag == 1){

			if((HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin))==1){
				               status2 = 0 ; MODE = 2 ; }
			MODE = 3 ;
			COUNTER = COUNTER + 1 ;

		}

		break ;

	case 2:
		break ;
	}
} ;
