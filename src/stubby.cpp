#include <stubby.hpp>

void stubby::clearDisplay() {
    gfx->fillScreen(BLACK);
}

void stubby::setTextColor(int16_t c){
    gfx->setTextColor(c);
}

void stubby::setTextSize(uint8_t s){
    gfx->setTextSize(s);
}

void stubby::setTextWrap(bool b){
    gfx->setTextWrap(b);
}

void stubby::setCursor(int x, int y){
    gfx->setCursor(x, y);
}

void stubby::print(const char * s) {
    gfx->println(s);
}

void stubby::printInt(int i) {
    std::string tmp = std::to_string(i);
    char const *s = tmp.c_str();
    gfx->println(s);
}

void stubby::drawBitmap(int16_t x, int16_t y, const unsigned char * bitmap, int16_t w, int16_t h, uint16_t color) {
    gfx->drawBitmap(x, y, bitmap, w, h, color);
}

void stubby::drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color) {
    gfx->drawLine(x0, y0, x1, y1, color);
}

void stubby::display() {
    gfx->flush();
}