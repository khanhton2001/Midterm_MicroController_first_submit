/*
 * Button2.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */

#include "Button2.h"
int KeyReg00 = NORMAL_STATE;
int KeyReg01 = NORMAL_STATE;
int KeyReg02 = NORMAL_STATE;
int KeyReg03 = NORMAL_STATE;

int TimeOutForKeyPress2 =  300;   // nhan de trong 2 giay thi se chuyen
int button2_flag = 0;


int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}


;
void subKeyProcess2(){
	//TODO
	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button2_flag = 1;



}

int onesec = 100 ;
void getKeyInput2(){
  KeyReg02 = KeyReg01;
  KeyReg01 = KeyReg00;
  KeyReg00 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
  if ((KeyReg01 == KeyReg00) && (KeyReg01 == KeyReg02)){
    if (KeyReg02 != KeyReg03){
      KeyReg03 = KeyReg02;

      if (KeyReg03 == PRESSED_STATE){
        TimeOutForKeyPress2 = 300;
        subKeyProcess2();
      }
    }else{
       TimeOutForKeyPress2 --;
        if (TimeOutForKeyPress2 == 0){


        	if(KeyReg00 == NORMAL_STATE){
          KeyReg03 = NORMAL_STATE;}
        }
    }
  }
}

