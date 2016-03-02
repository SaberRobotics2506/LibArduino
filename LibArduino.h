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
		int color(uint32_t r, uint32_t g, uint32_t, b);
	private:
		Adafruit_NeoPixel strip;
};

#endif
