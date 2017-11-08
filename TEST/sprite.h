#include <stdint.h>

#define X_LENGTH_NUMBER		5
#define X_LENGTH_PLAYER		11
#define X_LENGTH_SCORE		30

#define	ST7735_BLACK   0x0000
#define	ST7735_BLUE    0x001F
#define	ST7735_RED     0xF800
#define	ST7735_GREEN   0x07E0
#define ST7735_CYAN    0x07FF
#define ST7735_MAGENTA 0xF81F
#define ST7735_YELLOW  0xFFE0
#define ST7735_WHITE   0xFFFF


const uint8_t sprite_player[11] = {0x07,0x0F,0x0F,0x0F,0x3F,0x7F,0x3F,0x0F,0x0F,0x0F,0x07};
const uint8_t score[30] = 	{0x32,0x49,0x49,0x49,0x26,0x00,	0x3E,0x41,0x41,0x41,0x22,0x00,0x3E,0x41,0x41,0x41,0x3E,0x00,0x7F,0x48,0x4C,0x4A,0x31,0x00,0x7F,0x49,0x49,0x49,0x41,0x00 };
/*const uint8_t score[11] = 	{0x32,0x49,0x49,0x49,0x26,0x00,	\
							0x3E,0x41,0x41,0x41,0x22,0x00, \
							0x3E,0x41,0x41,0x41,0x3E,0x00, \
							0x7F,0x48,0x4C,0x4A,0x31,0x00 \ 
							0x7F,0x49,0x49,0x49,0x41,0x00 };
							//0x,0x,0x,0x,0x,0x00 \}*/
const uint8_t number0[5] = {0x3E,0x45,0x49,0x51,0x3E};
const uint8_t number1[5] = {0x00,0x00,0x21,0x7F,0x01};
const uint8_t number2[5] = {0x21,0x43,0x45,0x49,0x31};
const uint8_t number3[5] = {0x22,0x49,0x49,0x49,0x36};
const uint8_t number4[5] = {0x0C,0x14,0x24,0x7F,0x04};
const uint8_t number5[5] = {0x7A,0x49,0x49,0x49,0x46};
const uint8_t number6[5] = {0x3E,0x49,0x49,0x49,0x26};
const uint8_t number7[5] = {0x60,0x40,0x47,0x48,0x70};
const uint8_t number8[5] = {0x36,0x49,0x49,0x49,0x36};
const uint8_t number9[5] = {0x32,0x49,0x49,0x49,0x3E};



void drawGenericSprite(uint8_t x, uint8_t y, uint8_t x_length, uint8_t color);
void drawNumber(uint8_t x, uint8_t y, uint8_t number);
void drawScore(uint8_t x, uint8_t y);
void drawSpaceship(uint8_t x, uint8_t y);