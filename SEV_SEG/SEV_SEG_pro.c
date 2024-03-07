/*
 * SEV_SEG_pro.c

 *
 *  Created on: Mar 7, 2024
 *      Author: Rehab Khaled
 */

#include "SEV_SEG_int.h"
#include <avr/delay.h>


void SEV_SEG_voidInit(void)
{
	DIO_vidInit();
	/*
	 * port B pin 0:Pin 1.2.4  output low
	 */

	/*
	 * Enable
	 *
	 * port A pin 2,3   outut low
	 * portB pin 5,6    output low
	 */
}
void SEV_SEG_Enable1(void)
{
	DIO_enuSetPinValue(SEV_SEG_Enable1_PORT, SEV_SEG_Enable1_PIN    , DIO_u8_HIGH	);
}
void SEV_SEG_Enable2(void)
{
	DIO_enuSetPinValue(SEV_SEG_Enable2_PORT, SEV_SEG_Enable2_PIN, DIO_u8_HIGH	);
}
void SEV_SEG_Enable3(void)
{
	DIO_enuSetPinValue(SEV_SEG_Enable3_PORT, SEV_SEG_Enable3_PIN, DIO_u8_HIGH	);
}

void SEV_SEG_Enable4(void)
{
	DIO_enuSetPinValue(SEV_SEG_Enable4_PORT, SEV_SEG_Enable4_PIN, DIO_u8_HIGH	);
}



 void SEV_SEG_Disable1(void)
 {
	 DIO_enuSetPinValue(SEV_SEG_Enable1_PORT, SEV_SEG_Enable1_PIN    , DIO_u8_LOW	);
 }
 void SEV_SEG_Disable2(void)
 {
	 DIO_enuSetPinValue(SEV_SEG_Enable1_PORT, SEV_SEG_Enable2_PIN, DIO_u8_LOW	);

 }
 void SEV_SEG_Disable3(void)
 {
	 DIO_enuSetPinValue(SEV_SEG_Enable1_PORT, SEV_SEG_Enable3_PIN, DIO_u8_LOW	);
 }
 void SEV_SEG_Disable4(void)
 {
	 DIO_enuSetPinValue(SEV_SEG_Enable1_PORT,SEV_SEG_Enable4_PIN, DIO_u8_LOW	);
 }


 void SEV_SEG_Write_NUM(u8 Number)
 {
	 if(Number<10)
	 {
		DIO_enuSetPinValue(SEV_SEG_DECODER_A_PORT,SEV_SEG_DECODER_A_PIN, GET_BIT(Number,DIO_u8_PIN0 )  );
		DIO_enuSetPinValue(SEV_SEG_DECODER_B_PORT,SEV_SEG_DECODER_B_PIN, GET_BIT(Number,DIO_u8_PIN1 )  );
		DIO_enuSetPinValue(SEV_SEG_DECODER_C_PORT,SEV_SEG_DECODER_C_PIN, GET_BIT(Number,DIO_u8_PIN2 )  );
		DIO_enuSetPinValue(SEV_SEG_DECODER_D_PORT,SEV_SEG_DECODER_D_PIN, GET_BIT(Number,DIO_u8_PIN3 )  );

	 }

 }


 void SEV_SEG_Multiplexing(u16 Number,f32 Time_Sec)
 {
	u32 Time_MSec=Time_Sec*1000;
	 if(Number<10000)
	 {
		 u16 Right2=Number%100;
		 u16 Left2=Number/100;

		 u16 Right=Number%10;
		u16 Left=Number/10;




		 for(u32 Iterator=0; Iterator<Time_MSec/20;Iterator++)
		 {
			  SEV_SEG_Disable1();
			 SEV_SEG_Disable2();
			 SEV_SEG_Disable3();
			SEV_SEG_Disable4();

			SEV_SEG_Write_NUM( Left2);
			SEV_SEG_Enable1();
			_delay_ms(10);
			SEV_SEG_Disable1();


			SEV_SEG_Write_NUM( Right2);
			SEV_SEG_Enable2();
			_delay_ms(10);
			SEV_SEG_Disable2();

			SEV_SEG_Write_NUM( Left);
            SEV_SEG_Enable3();
            _delay_ms(10);
            SEV_SEG_Disable3();


            SEV_SEG_Write_NUM( Right);
            SEV_SEG_Enable4();
            _delay_ms(10);
   //      SEV_SEG_Disable4();






















		 }


	 }
 }



