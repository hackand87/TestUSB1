#ifndef __LCD_H__
#define __LCD_H__

//#include "main.h"
//#include "stm32f1xx_hal.h"
#include "stm32f1xx.h"


#define DB0_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
#define DB1_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);
#define DB2_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET);
#define DB3_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET);
#define DB4_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
#define DB5_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
#define DB6_SET() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);
#define DB7_SET() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);

#define DB0_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
#define DB1_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);
#define DB2_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET);
#define DB3_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
#define DB4_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
#define DB5_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
#define DB6_RES() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
#define DB7_RES() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);

#define E_SET() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
#define E_RES() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_RESET);

#define RS_SET() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);
#define RS_RES() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);

void LCD_Init(void);
void LCD_SendString(char* str);
void LCD_SendChar(char ch);
void LCD_Clear(void);
void LCD_SetPos(uint8_t x, uint8_t y);
void LCD_SendData(uint8_t dt);

#endif /* __LCD_H__ */