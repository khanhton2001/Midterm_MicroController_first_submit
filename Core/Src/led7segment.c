/*
 * led7segment.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#include"led7segment.h"

void displaysecond7SEG(int count){

	switch(count){

	 	    case 0:
	 	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 	 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin , RESET) ;
	 	 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 	 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin ,   SET) ;
	 	 			break ;

	 		case 1:


	 			 HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin ,   SET) ;
	 			 HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 			 HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 			 HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin ,   SET) ;
	 			 HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 			 HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin ,   SET) ;
	 			 HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin ,   SET) ;
	 			 break ;

	 		case 2:

	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin ,   SET) ;
	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin , RESET) ;
	 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin ,   SET) ;
	 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break ;

	 		case 3:

	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	     		HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin ,   SET) ;
	 	        HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break ;

	 		case 4:
	 		 	HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin ,   SET) ;
	 		 	HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin ,   SET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 		    break ;

	 		case 5:
	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin ,   SET) ;
	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break ;

	 		case 6:
	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , SET  ) ;
	 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break;

	 		case 7:
	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin ,   SET) ;
	 			HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 			HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin ,   SET) ;
	 			HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin ,   SET) ;
	 			break ;

	 		case 8:
	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin , RESET) ;
	 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break ;

	 		case 9:
	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG00_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG01_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG02_Pin , RESET) ;
	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG03_Pin , RESET) ;
	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG04_Pin ,   SET) ;
	 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG05_Pin , RESET) ;
	 	        HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG06_Pin , RESET) ;
	 			break ;



	 	}


}


void display7SEG(int count){

 	switch(count){

 	    case 0:
 	 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 	 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 	 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 	 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 	 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin , RESET) ;
 	 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 	 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin ,   SET) ;
 	 			break ;

 		case 1:


 			 HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin ,   SET) ;
 			 HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 			 HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 			 HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin ,   SET) ;
 			 HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 			 HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin ,   SET) ;
 			 HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin ,   SET) ;
 			 break ;

 		case 2:

 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , SET) ;
 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin , RESET) ;
 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , SET) ;
 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break ;

 		case 3:

 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 	        HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
     		HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin ,   SET) ;
 	        HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break ;

 		case 4:
 		 	HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin ,   SET) ;
 		 	HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin ,   SET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 		    break ;

 		case 5:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin ,   SET) ;
 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break ;

 		case 6:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin ,   SET) ;
 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break;

 		case 7:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin ,   SET) ;
 			HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 			HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin ,   SET) ;
 			HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin ,   SET) ;
 			break ;

 		case 8:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 		 	HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin , RESET) ;
 	        HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break ;

 		case 9:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port , SEG0_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG1_GPIO_Port , SEG1_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG2_GPIO_Port , SEG2_Pin , RESET) ;
 			HAL_GPIO_WritePin(SEG3_GPIO_Port , SEG3_Pin , RESET) ;
 		    HAL_GPIO_WritePin(SEG4_GPIO_Port , SEG4_Pin ,   SET) ;
 		    HAL_GPIO_WritePin(SEG5_GPIO_Port , SEG5_Pin , RESET) ;
 	        HAL_GPIO_WritePin(SEG6_GPIO_Port , SEG6_Pin , RESET) ;
 			break ;



 	}


 } ;

const int MAX_LED = 4 ;
const int zero = 0 ;
int index_led= 0 ;
int led_buffer[4] = {1,2,3,4} ;

void update7SEG(int index){

	/* int temp = 0 ; */
	switch(index){


	case 0 :
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin ,   SET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin , RESET);
		/*temp = led_buffer[index] ;
        display7SEG(temp) ; */
        break;

	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin ,  SET);
		/*temp = led_buffer[index] ;
		display7SEG(temp) ; */
		break ;

	case 2:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin ,   SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin , RESET);
		/* temp = led_buffer[index] ;
		display7SEG(temp) ; */
		break ;

	case 3:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin ,   SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin , RESET);
		/* temp = led_buffer[index] ;
		display7SEG(temp) ; */
		break ;


	default:
		break ;
    }
}

void updateClockBuffer(int hour , int minute ){


	update7SEG(index_led)  ;
	if(index_led >= 4){  index_led = 0  ; }


    int temp = led_buffer[index_led] ;

    int minute_modulo = minute%10 ;
    int minute_first_digit = (minute - minute_modulo)/10 ;

    int hour_modulo = hour%10 ;
    int hour_first_digit = (hour - hour_modulo)/10 ;
	switch(temp){

	case 1:
		if(hour >= 10){     update7SEG(index_led) ;    display7SEG(hour_first_digit) ; }
		if(hour <  10){     update7SEG(index_led) ;    display7SEG(index_led)        ; }
		index_led++ ;
		break ;



	case 2:
	   if(hour >= 10){    update7SEG(index_led) ;    display7SEG(hour_modulo) ; }
	   if(hour  < 10){    update7SEG(index_led) ;    display7SEG(hour)        ; }
       index_led++ ;
	   break ;


	case 3:
	   if(minute >= 10){	update7SEG(index_led)  ;	display7SEG(minute_first_digit) ; }
	   if(minute  < 10 ){   update7SEG(index_led)  ;	display7SEG(zero)               ; }
	   index_led++ ;
	   break ;


	case 4:
		if(minute >= 10){	update7SEG(index_led) ;		display7SEG(minute_modulo) ; }
		if(minute  < 10){	update7SEG(index_led) ;		display7SEG(minute)        ; }
	    index_led++ ;
		break ;



	}

   }
