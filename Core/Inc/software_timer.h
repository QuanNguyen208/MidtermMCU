/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */
#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "button.h"
#include "main.h"

extern int timer_flag;

void setTimer(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
