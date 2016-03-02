#ifndef LibArduino_h
#define LibArduino_h

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

class LibArduino {
	public:
		LibArduino(int pin, int leds);
		void walkUp (uint32_t c, uint32_t wait);
		void walkDown (uint32_t c, uint32_t wait);
		void setAllColors(uint32_t c);
		void setColorsInRange(uint16_t min, uint16_t max, uint32_t c);
		uint32_t color(int r, int g, int b);
	private:
		Adafruit_NeoPixel strip;
};

#endif
