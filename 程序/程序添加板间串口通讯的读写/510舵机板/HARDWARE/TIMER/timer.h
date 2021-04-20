#ifndef __TIMER_H
#define __TIMER_H
#include "sys.h"
#include "stm32f10x_tim.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//定时器 驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/4
//版本：V1.1
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
//********************************************************************************
void TIM3_PWM_Init(u16 arr,u16 psc);
void TIM4_PWM_Init( u16 arr, u16 psc );
void TIM2_Int_Init(u16 arr,u16 psc);
void TIM6_Int_Init(u16 arr,u16 psc);
void TIM7_Int_Init(u16 arr,u16 psc);
void servo_init(int servo_id);
void servo_control(u8 servo_id,float angle,float time);
void servo_move(u8 servo_id,float angle,float time);
void servo_set_servo(int servo_id,float angle);
#endif
