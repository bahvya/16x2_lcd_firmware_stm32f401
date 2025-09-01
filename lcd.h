// lcd.h
#ifndef LCD_H
#define LCD_H

#include "stm32f4xx_hal.h"  // Include the HAL library header for STM32F4xx series

// Pin definitions - Customize these based on your connections to STM32F401CCU6
// Assuming:
// - RS connected to GPIOA Pin 0
// - EN connected to GPIOA Pin 1
// - D4 connected to GPIOA Pin 4
// - D5 connected to GPIOA Pin 5
// - D6 connected to GPIOA Pin 6
// - D7 connected to GPIOA Pin 7
// RW pin should be grounded (we're not reading from LCD)
// VSS grounded, VDD to 5V, V0 to potentiometer for contrast

#define LCD_RS_PORT GPIOA
#define LCD_RS_PIN GPIO_PIN_0

#define LCD_EN_PORT GPIOA
#define LCD_EN_PIN GPIO_PIN_1

#define LCD_D4_PORT GPIOA
#define LCD_D4_PIN GPIO_PIN_4

#define LCD_D5_PORT GPIOA
#define LCD_D5_PIN GPIO_PIN_5

#define LCD_D6_PORT GPIOA
#define LCD_D6_PIN GPIO_PIN_6

#define LCD_D7_PORT GPIOA
#define LCD_D7_PIN GPIO_PIN_7

// Function prototypes
void LCD_Init(void);
void LCD_SendCommand(uint8_t cmd);
void LCD_SendData(uint8_t data);
void LCD_PrintString(const char *str);
void LCD_SetCursor(uint8_t row, uint8_t col);
void LCD_Clear(void);

#endif // LCD_H
