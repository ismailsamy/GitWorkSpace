#ifndef _TIM_CONFIG_H
#define _TIM_CONFIG_H

1 8 64 256 1024 
/*Description  :prescaler
/*Range 	   :TIM_u8_NO_DIVISION    */
/*				TIM_u8_NO_DIVISION     */
/*	     		TIM_u8_DIV_BY_8      */
/*				TIM_u8_DIV_BY_64      */
	/*			TIM_u8_DIV_BY_256    */
		/*		TIM_u8_DIV_BY_1024    */

#define TIM_u8_PRESCALER     TIM_u8_DIV_BY_1024

/*Descriptopn : Timer initial value*/

#define TIM_u8_INIT_VALUE      45

#endif