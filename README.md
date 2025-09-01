# 16x2_lcd_firmware_stm32f401
lcd firmware for 16x2 lcd display for stm32f401. tested on stm32f401ccu6 using 4 gpio for data pins d4-d7

API DESCRIPTION
The following functions are avaliable in the provided lcd files
void LCD_Init(void);   													// initializes the the screen sends the necessary control words
void LCD_SendCommand(uint8_t cmd);							// send command usually you wont need to use this
void LCD_SendData(uint8_t data);								// sends data usually you wont need to use this either
void LCD_PrintString(const char *str);					// prints whatever sting you pass to the function onto the lcd
void LCD_SetCursor(uint8_t row, uint8_t col);		// sets the cursor to the specified location (0,0) is the top rows first column (1,0) is the second rows first column
void LCD_Clear(void);														// clears the entie lcd


USAGE
1. Under the Core directory of your project
	copy the lcd.h file into inc folder
 	copy the lcd.c file into src folder
2. In the main.c file do a #include "lcd.h" under the user includes section if using cubemx generated code.
3. in the int main function of your project add the LCD_Init(); line before using the screen
And youre good to go.


 potential issues lcd does not respond well to 3.3V power so i would reccomend using 5V. using 3.3V it worked for me but gave contrast issues which made it unusable. maybe i just need the power rails to be 5V i havent looked into it.

 Feel free to tell me about any mistakes i have made or any improvements i should make this is my first time showcasing my code like this!. <3


