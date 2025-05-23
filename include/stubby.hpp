#include <Arduino_GFX_Library.h>

/*
  Very simple stub class that will convert the generated Adafruit_GFX calls to Arduino_GFX calls
  This helps keep me lazy so I can use https://lopaka.app/sandbox to style the output as much as possible
 */
class stubby {
    public:
        stubby(Arduino_GFX *g) : gfx(g) {}
        void clearDisplay();
        void setTextColor(int16_t);
        void setTextSize(uint8_t);
        void setTextWrap(bool);
        void setCursor(int, int);
        void print(const char *);
        void printInt(int);
        void drawBitmap(int16_t x, int16_t y, const unsigned char * bitmap, int16_t w, int16_t h, uint16_t color);
        void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
        void display();

    private:
        Arduino_GFX *gfx;
};