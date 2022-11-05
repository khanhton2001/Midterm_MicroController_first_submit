/*
 * traffic_light2.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#include "traffic_light.h"

void setTrafficLight2(){

	switch(status){

	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , RED_Pin   , RESET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin ,   SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, YELLOW_Pin,   SET) ;
		break ;

	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , RED_Pin       ,  SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin   ,RESET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , YELLOW_Pin ,  SET) ;
		break ;

	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , RED_Pin     , SET)  ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin   , SET)  ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , YELLOW_Pin , RESET);
		break ;

	case MAN_RED:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , RED_Pin   , RESET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin ,   SET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, YELLOW_Pin,   SET) ;

		break ;

	case MAN_GREEN:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port , RED_Pin       ,  SET) ;
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin   ,RESET) ;
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , YELLOW_Pin ,  SET) ;
		break ;

	case MAN_YELLOW:
		HAL_GPIO_WritePin(LED_RED_GPIO_Port   , RED_Pin     , SET)  ;
	    HAL_GPIO_WritePin(LED_GREEN_GPIO_Port , GREEN_Pin   , SET)  ;
	    HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port , YELLOW_Pin , RESET);
		break ;

	default:
		break ;

	}
}

