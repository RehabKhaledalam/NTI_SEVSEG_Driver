/*
 * SEV_SEG_int
.h
 *
 *  Created on: Mar 7, 2024
 *      Author: Rehab Khaled
 */

#ifndef HAL_SEV_SEG_SEV_SEG_INT_H_
#define HAL_SEV_SEG_SEV_SEG_INT_H_

#include "../../LIB/BIT_Utils.h"
#include "../../LIB/STD_Types.h"

#include "../../MCAL/DIO/DIO_int.h"
#include "../../MCAL/DIO/DIO_cfg.h"

#include "SEV_SEG_cfg.h"

void SEV_SEG_voidInit(void);

void SEV_SEG_Enable1(void);
void SEV_SEG_Enable2(void);
void SEV_SEG_Enable3(void);
void SEV_SEG_Enable4(void);



 void SEV_SEG_Disable1(void);
 void SEV_SEG_Disable2(void);
 void SEV_SEG_Disable3(void);
 void SEV_SEG_Disable4(void);


void SEV_SEG_Write_NUM(u8 Number);

void SEV_SEG_Multiplexing(u16 Number,f32 Time_Sec);







#endif /* HAL_SEV_SEG_SEV_SEG_INT_H_ */
