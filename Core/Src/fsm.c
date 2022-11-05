/*
 * fsm.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */
#include "fsm.h"
#include "global.h"


void fsm_simple_buttons_run(){
	switch(current){
	    case 0 :

	    		if (isButton1Pressed()==1){
	    				current = 0 ;
	    				numseg = current ;
	    		}
	    		if (isButton2Pressed()==1){
	    				current = 1 ;
	    				numseg = current ;
	    		}
	    		if (isButton3Pressed()==1){
	    				current = 9 ;
	    				numseg = current ;
	    		}
	    		break ;
	    case 1 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 2 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 2 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 3 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 1 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 3 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 4 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 2 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 4 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 5 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 3 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 5 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 6 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 4 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 6 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 7 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 5 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break;
	    case 7 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 8 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 6 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 8 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 9 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 7 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	    case 9 :

	   	    		if (isButton1Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton2Pressed()==1){
	   	    				current = 0 ;
	   	    				numseg = current ;
	   	    		}
	   	    		if (isButton3Pressed()==1){
	   	    				current = 8 ;
	   	    				numseg = current ;
	   	    		}
	   	    		break ;
	}
}
