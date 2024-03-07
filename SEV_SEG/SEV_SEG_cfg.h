/*
 * SEV_SEG_cf

 *
 *  Created on: Mar 7, 2024
 *      Author: Rehab Khaled
 */

#ifndef HAL_SEV_SEG_SEV_SEG_CFG_H_
#define HAL_SEV_SEG_SEV_SEG_CFG_H_

/*option Set SEV_SEG port & PINS ENABLE
  /* macros for ports
 DIO_u8_PORTA		0
 DIO_u8_PORTB		1
 DIO_u8_PORTC		2
 DIO_u8_PORTD		3

/* macros for pins */
/*DIO_u8_PIN0			0
/*DIO_u8_PIN1			1
/*DIO_u8_PIN2			2
/*DIO_u8_PIN3			3
/*DIO_u8_PIN4			4
/*DIO_u8_PIN5			5
/*DIO_u8_PIN6			6
/*DIO_u8_PIN7			7
 *
 */


#define SEV_SEG_Enable1_PORT            DIO_u8_PORTA
#define SEV_SEG_Enable1_PIN             DIO_u8_PIN2


#define SEV_SEG_Enable2_PORT            DIO_u8_PORTA
#define SEV_SEG_Enable2_PIN             DIO_u8_PIN3


#define SEV_SEG_Enable3_PORT            DIO_u8_PORTB
#define SEV_SEG_Enable3_PIN             DIO_u8_PIN5

#define SEV_SEG_Enable4_PORT            DIO_u8_PORTB
#define SEV_SEG_Enable4_PIN             DIO_u8_PIN6



 #define SEV_SEG_DECODER_A_PIN            DIO_u8_PIN0
 #define SEV_SEG_DECODER_B_PIN            DIO_u8_PIN1
 #define SEV_SEG_DECODER_C_PIN            DIO_u8_PIN2
 #define SEV_SEG_DECODER_D_PIN            DIO_u8_PIN4




 #define SEV_SEG_DECODER_A_PORT            DIO_u8_PORTB
 #define SEV_SEG_DECODER_B_PORT            DIO_u8_PORTB
 #define SEV_SEG_DECODER_C_PORT            DIO_u8_PORTB
 #define SEV_SEG_DECODER_D_PORT            DIO_u8_PORTB


#endif /* HAL_SEV_SEG_SEV_SEG_CFG_H_ */
