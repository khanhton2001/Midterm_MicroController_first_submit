/*
 * fsm_mode0.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#include "fsm_mode0.h"

void fsm_Mode0_run(){

	switch(MODE){

	case 0:
		   if(timer1_flag == 1){
		   display7SEG(COUNTER) ;
		   HAL_GPIO_TogglePin(LED_RED_GPIO_Port , LED_RED_Pin) ;
		   setTimer1(100) ;
		   COUNTER++ ;   }

		   if(isButton1Pressed() == 1){
		   	        	  COUNTER = 10   ;
		   	        	  setTimer1(100) ; }

		   if(COUNTER >= 10){COUNTER = 0 ; }

		   if(isButton2Pressed() == 1){  MODE = 1  ; setTimer1(100) ; }
		   if(isButton3Pressed() == 1){  MODE = 2  ; setTimer1(100) ; }
		break ;

	case 1:
		if(isButton2Pressed() == 1){
			                         if(COUNTER >= 10){ COUNTER = 0 ;}
			                         display7SEG(COUNTER) ;
			                         COUNTER = COUNTER + 1 ;
		                             display7SEG(COUNTER) ;
		                             setTimer1(100) ; }

		if(isButton3Pressed() == 1){ MODE = 2 ; setTimer1(100) ; }
		if(isButton1Pressed() == 1){ MODE = 0 ; setTimer1(100) ; }
		break ;

	case 2:
		if(isButton3Pressed() == 1){ display7SEG(COUNTER) ;
			                         if(COUNTER <= 0){ COUNTER = 9 ;}
					                 COUNTER = COUNTER - 1 ;
				                     display7SEG(COUNTER) ;
				                     setTimer1(100) ; }

		if(isButton2Pressed() == 1){ MODE = 1  ; }
		if(isButton1Pressed() == 1){ MODE = 0  ; setTimer1(100) ; }
		break ;

	case 3:
		break ;

	default:
		break ;
	}


	;
}
