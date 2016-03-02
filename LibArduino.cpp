#include "LibArduino.h"

LibArduino::LibArduino(int pin, int leds) {
	strip = Adafruit_NeoPixel(leds, pin, NEO_GRB + NEO_KHZ800);
	strip.begin();
	strip.show();
}

void LibArduino::walkUp (uint32_t c, uint32_t wait) {
  for (uint16_t i = 1; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.setPixelColor(i - 1, 0);
    strip.show();
    delay(wait);
  }
}

void LibArduino::walkDown (uint32_t c, uint32_t wait) {
  for (uint16_t i = strip.numPixels() - 1; i > 1; i--) {
    strip.setPixelColor(i, c);
    strip.setPixelColor(i + 1, 0);
    strip.show();
    delay(wait);
  }
}

void LibArduino::setAllColors(uint32_t c) {
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
  }
  strip.show();
}

void LibArduino::setColorsInRange(uint16_t min, uint16_t max, uint32_t c) {
  while (min < max) {
    strip.setPixelColor(min++, c);
  }
  strip.show();
}

uint32_t LibArduino::color(int r, int g, int b) {
	return strip.Color(r, g, b);
}
