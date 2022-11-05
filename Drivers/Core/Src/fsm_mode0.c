/*
 * fsm_mode0.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */
#include "fsm_mode0.h"
int time_to_stop ;
int checker = 0 ;
void fsm_Mode0_run(){

	switch(MODE){

	case 0:
		   if(timer1_flag == 1){

		   setTimer1(100) ;
		   COUNTER-- ;   }

		   if(isButton1Pressed() == 1){
		   	        	  COUNTER = 0   ;
		   	        	  setTimer1(100) ; setTimer4(700) ; }

		   if(COUNTER <= -1){COUNTER = 9 ; }

		   if(isButton2Pressed() == 1){  MODE = 1  ; setTimer1(100) ; setTimer4(1000) ; }
		   if(isButton3Pressed() == 1){  MODE = 2  ; setTimer1(100) ; setTimer4(1000) ; }
		   if((timer3_flag == 1)&&(isButton2Pressed() == 0)&&(isButton3Pressed() == 0)){
			   MODE = 3 ; setTimer1(100) ;
		   }
		   if(timer4_flag == 1){ time_to_stop = COUNTER*100 ; setTimer3(COUNTER) ;  }
		   break ;


	case 1:
		if(isButton2Pressed() == 1){
			                         if(COUNTER >= 10){ COUNTER = -1;}
			                         display7SEG(COUNTER) ;
			                         COUNTER = COUNTER + 1 ;
		                             setTimer1(100) ; setTimer4(1000) ;  }

		if(isButton3Pressed() == 1){ MODE = 2 ; setTimer1(100) ; setTimer4(1000) ; }
		if(isButton1Pressed() == 1){ MODE = 0 ; setTimer1(100) ; setTimer4(1000) ; }
		if(timer4_flag == 1){ MODE = 0 ; time_to_stop = COUNTER*100; setTimer3(time_to_stop) ;}

		break ;




	case 2:

		if(isButton3Pressed() == 1){
			                         if(COUNTER <= 0){ COUNTER = 10 ; }
					                 COUNTER = COUNTER - 1 ;
				                     setTimer1(100) ; setTimer4(1000) ; }

		if(isButton2Pressed() == 1){ MODE = 1  ; setTimer4(1000) ; }
		if(isButton1Pressed() == 1){ MODE = 0  ; setTimer1(100) ; setTimer4(1000) ;  }
		if(timer4_flag == 1){ MODE = 0 ; time_to_stop = COUNTER*100; setTimer3(time_to_stop) ;}
		break ;



	case 3:

        if((checker == 0)&&(timer1_flag == 1) ){ COUNTER-- ; checker = 1 ;  }
		if(isButton2Pressed() == 1){ MODE = 1  ; setTimer1(100) ; setTimer4(700)  ; checker = 0 ;}
		if(isButton3Pressed() == 1){ MODE = 2 ; setTimer1(100) ; setTimer4(700)   ; checker = 0 ;}
	    if(isButton1Pressed() == 1){ MODE = 0 ; setTimer1(100) ; setTimer4(700)   ; checker = 0 ;}


		break ;

	default:
		break ;
	}


	;
}
