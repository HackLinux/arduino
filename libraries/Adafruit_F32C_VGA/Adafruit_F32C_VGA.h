/*********************************************************************
This is a library for F32C framebuffer
*********************************************************************/

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Adafruit_GFX.h>

#define BLACK       0x0000
#define BLUE        0x001F
#define RED         0xF800
#define GREEN       0x07E0
#define CYAN        0x07FF
#define MAGENTA     0xF81F
#define YELLOW      0xFFE0
#define DARKBLUE    0x0010
#define DARKRED     0x8000
#define DARKGREEN   0x0400
#define DARKCYAN    0x0410
#define DARKMAGENTA 0x8010
#define DARKYELLOW  0x8400
#define WHITE       0xFFFF

#define F32C_VGA_WIDTH  640
#define F32C_VGA_HEIGHT 480

class Adafruit_F32C_VGA : public Adafruit_GFX {
 public:
  Adafruit_F32C_VGA(int8_t mode);

  void begin(void);

  uint32_t *videobase = (uint32_t *)0x8000F000;
  volatile uint32_t *videomem = videobase;
  volatile uint32_t *videodisplay = (uint32_t *) 0xFFFFFB80;
  const uint32_t videosize = F32C_VGA_WIDTH*F32C_VGA_HEIGHT/8*4; // one videopage size in bytes
  uint8_t videopage = 0; // alternate video page 0 or 1

  void clearDisplay(void);
  void invertDisplay(uint8_t i);
  void display();

  void startscrollright(uint8_t start, uint8_t stop);
  void startscrollleft(uint8_t start, uint8_t stop);

  void startscrolldiagright(uint8_t start, uint8_t stop);
  void startscrolldiagleft(uint8_t start, uint8_t stop);
  void stopscroll(void);

  void dim(uint8_t contrast);

  void drawPixel(int16_t x, int16_t y, uint16_t color);
//  void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
//  void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
};
