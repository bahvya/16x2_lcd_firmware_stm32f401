# 16x2 LCD Firmware for STM32F401

This project provides a simple firmware library to drive a **16x2 LCD display** in 4-bit mode using an STM32F401.  
Tested on **STM32F401CCU6** with GPIO pins connected to LCD data lines **D4–D7**.

---

## Features
- Initialize and control a 16x2 character LCD.
- Print strings directly to the display.
- Set cursor position.
- Clear the screen.

---

## API Reference

```c
void LCD_Init(void);    
// Initializes the LCD and sends the necessary control words.

void LCD_SendCommand(uint8_t cmd);    
// Sends a command to the LCD (usually not needed directly).

void LCD_SendData(uint8_t data);    
// Sends raw data to the LCD (usually not needed directly).

void LCD_PrintString(const char *str);    
// Prints a null-terminated string to the LCD.

void LCD_SetCursor(uint8_t row, uint8_t col);    
// Sets the cursor to the specified location. 
// (0,0) → top-left corner, (1,0) → bottom-left corner.

void LCD_Clear(void);    
// Clears the entire LCD screen.
```

---

## Usage

1. Under the **Core** directory of your STM32CubeIDE project:
   - Copy `lcd.h` into the `Inc` folder.
   - Copy `lcd.c` into the `Src` folder.

2. In your `main.c`, add:
   ```c
   #include "lcd.h"
   ```

3. Inside `main()`:
   ```c
   LCD_Init();  // Initialize LCD before use
   LCD_PrintString("Hello, World!");
   ```

And you're good to go! 🎉

---

## Notes / Potential Issues
- The LCD does not always respond well at **3.3V power**.  
  - Works at 3.3V but may cause contrast issues.  
  - Recommended: power the LCD with **5V** for stable operation.  
- Feedback and improvements are welcome — this is my first time showcasing code like this ❤️.  

---

## License
[MIT License](LICENSE) – Feel free to use and modify.
