/*
 * Button3.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Khanh Ton
 */


#include "Button3.h"
int KeyReg000 = NORMAL_STATE;
int KeyReg001 = NORMAL_STATE;
int KeyReg002 = NORMAL_STATE;
int KeyReg003 = NORMAL_STATE;

int TimeOutForKeyPress3 =  300;   // nhan de trong 2 giay thi se chuyen
int button3_flag = 0;


int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}



void subKeyProcess3(){
	//TODO
	//HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	button3_flag = 1;

}

void getKeyInput3(){
  KeyReg002 = KeyReg001;
  KeyReg001 = KeyReg000;
  KeyReg000 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
  if ((KeyReg001 == KeyReg000) && (KeyReg001 == KeyReg002)){
    if (KeyReg002 != KeyReg003){
      KeyReg003 = KeyReg002;

      if (KeyReg003 == PRESSED_STATE){
        TimeOutForKeyPress3 = 300;
        subKeyProcess3();
      }
    }else{
       TimeOutForKeyPress3-- ;
        if (TimeOutForKeyPress3 == 0){
          KeyReg003 = NORMAL_STATE;
        }
    }
  }
}
