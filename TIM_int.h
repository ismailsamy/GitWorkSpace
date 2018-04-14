#ifndef _TIM_INT_H
#define _TIM_INT_H

/*Description : this function shall initialize the timer */
/*         peripheral                      */
void TIM_voidInitialize(void);

/*Description :  Enable  Timer Interrupt  */
void TIM_voidEnableInt(void);

/*Description :  Disable  Timer Interrupt */
void TIM_voidDisableInt(void);

/*Description : set timer CallBack function */
void TIM_voidSetCallBack(void(*ptrCpy)(void));

/*Description :  Initialize Timer Register */
void TIM_voidInitRegister(u8 u8ValueCpy);

#endif
