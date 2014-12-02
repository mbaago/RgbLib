// 
// 
// 

#include "RgbLedLib.h"


	RgbLib::RgbLib(int rPin, int gPin, int bPin){
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	}

	void RgbLib::setColor(int r, int g, int b){
	redPMW = r;
	greenPMW = g;
	bluePMW = b;
	}

	void RgbLib::ledOn(){
	analogWrite(redPin, redPMW);
	analogWrite(greenPin, greenPMW);
	analogWrite(bluePin, bluePMW);
	}

	void RgbLib::ledOf(){
	analogWrite(redPin, 0);
	analogWrite(greenPin, 0);
	analogWrite(bluePin, 0);
	}

	void RgbLib::setColorByName(int color){
	switch (color)
	{
	case red:
		setColor(255,0,0);
		break;
	case green:
		setColor(0,255,0);
		break;
	case yellow:
		setColor(255,255,0);
		break;
	default:
		setColor(230,230,250);
		break;
	}
	}
