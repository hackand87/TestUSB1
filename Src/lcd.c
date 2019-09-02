#include "LCD.h"

void LCD_Delay(void){
    uint16_t i;

    for (i=0; i<1000; i++)
    {

    }
}

void LCD_SetData(int dt){
    if ( ((dt>>7) & 0x01) == 1) {DB7_SET();} else {DB7_RES();}
    if ( ((dt>>6) & 0x01) == 1) {DB6_SET();} else {DB6_RES();}
    if ( ((dt>>5) & 0x01) == 1) {DB5_SET();} else {DB5_RES();}
    if ( ((dt>>4) & 0x01) == 1) {DB4_SET();} else {DB4_RES();}
    if ( ((dt>>3) & 0x01) == 1) {DB3_SET();} else {DB3_RES();}
    if ( ((dt>>2) & 0x01) == 1) {DB2_SET();} else {DB2_RES();}
    if ( ((dt>>1) & 0x01) == 1) {DB1_SET();} else {DB1_RES();}
    if ( ((dt>>0) & 0x01) == 1) {DB0_SET();} else {DB0_RES();}
}

void LCD_SendCmd(uint8_t dt){
    RS_RES();
    
    LCD_SetData(dt);

    E_SET();
    LCD_Delay();
    E_RES();
}

void LCD_SendData(uint8_t dt){
    RS_SET();
    
    LCD_SetData(dt);
    
    E_SET();
    LCD_Delay();
    HAL_Delay(1);
    E_RES();
}

void LCD_Init(void){
    LCD_SendCmd(0x38);
    HAL_Delay(1);
    LCD_SendCmd (0x0C);
    HAL_Delay(1);
    LCD_SendCmd(0x01);
    HAL_Delay(2);
    LCD_SendCmd(0x06);
    HAL_Delay(1);
    LCD_SendCmd(0x02);
    HAL_Delay(2);
}

void LCD_SendString(uint8_t StrNum, char* str){
    
    uint8_t i=0;

    if(StrNum == 0){
        LCD_SendCmd(0x80);
    }else{
        LCD_SendCmd(0xC0);
    }
    HAL_Delay(1);
    
    while(str[i] != 0){
        LCD_SendData(str[i]);
        //LCD_Delay();
        HAL_Delay(10);
        i++;
    }
}