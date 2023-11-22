/*
 * TMR2_Config.h
 *
 *  Created on: Oct 26, 2023
 *      Author: Mahmoud El Arabi
 */

#ifndef MCAL_TIMER2_TMR2_CONFIG_H_
#define MCAL_TIMER2_TMR2_CONFIG_H_

#include "TMR2_Private.h"

// Configure TMR2 Mode    --> TMR2_NORMAL_MODE	TMR2_CTC_MODE	TMR2_FastPWM_MODE	TMR2_Phase_Correct_PWM_MODE
#define TMR2_MODE					TMR2_CTC_MODE
// Fast_PWM_MODE 		  --> inverting		or	non_inverting
#define Fast_PWM_MODE2				non_inverting2
// Phase_correct_PWM_MODE --> inverting		or	non_inverting
#define Phase_correct_PWM_MODE2		non_inverting2

#define TMR2_PRESCALER				64
#define TMR2_PRELOAD				113
#define TMR2_OVERFLOW				977
#define TMR2_OCR2_val				249


#endif /* MCAL_TIMER2_TMR2_CONFIG_H_ */
