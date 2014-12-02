#ifndef RgbLed_h
#define RgbLed_h
#include <Arduino.h>

enum colors
{
	red,
	green,
	yellow,
	dave,
};

class RgbLib{
	public:
		RgbLib(int rPin, int gPin, int bPin);
		void setColor(int r, int g, int b);
		void ledOn();
		void ledOf();
		void setColorByName(int color);
	private:
		int redPin;
		int greenPin;
		int bluePin;
		int redPMW;
		int greenPMW;
		int bluePMW;
};
#endif
