/****************************************************************************
* Title                 :   UART   
* Filename              :   UART_interface.h
* Author                :   Mohamed Hafez
* Origin Date           :   19/09/2020
* Version               :   1.0.0
* Compiler              :   TODO: COMPILER GOES HERE
* Target                :   TODO: MCU GOES HERE
* Notes                 :   None
*
*****************************************************************************/
/****************************************************************************
* Doxygen C Template 
*
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date    Version   Author          Description 
*  19/09/20   1.0.0   Mohamed Hafez   Interface Created.
*
*****************************************************************************/
/** @file  UART_interface.h
 *  @brief This module TODO: WHAT DO I DO?
 * 
 *  This is the header file for the definition TODO: MORE ABOUT ME!
 */
//TODO: UPDATE MACRO BELOW
#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

/******************************************************************************
* Includes
*******************************************************************************/

/******************************************************************************
* Preprocessor Constants
*******************************************************************************/
#define UART1                      0
// UART Pins Without Mapping.
#define UART_1_TX                  PINA9
#define UART_1_RX                  PINA10
#define UART_2_TX                  PINA2
#define UART_2_RX                  PINA3
#define UART_3_TX                  PINB10
#define UART_3_RX                  PINB11
// Flag states
#define FLAG_NOT_SET               0
#define FLAG_SET                   1


/******************************************************************************
* Configuration Constants
*******************************************************************************/

/******************************************************************************
* Macros
*******************************************************************************/
	
/******************************************************************************
* Typedefs
*******************************************************************************/

/******************************************************************************
* Variables
*******************************************************************************/

/******************************************************************************
* Function Prototypes
*******************************************************************************/
void MUART_voidInit(void);
void MUART_voidTransmitSynch(u8 Copy_u8DataArray[]);
u8   MUART_u8ReceiveSynch(u8 * Copy_u8Data);

#endif /*File_H_*/

/*** End of File **************************************************************/