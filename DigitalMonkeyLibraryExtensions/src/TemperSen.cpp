#include <Arduino.h>
#include "TemperSen.h"

TemperSen::TemperSen(int pin) {
	_pin = pin;
}

float TemperSen::getTemper() {
	int value = analogRead(_pin);
	float temp = (float)value * 1000.0/1023.0;
	temp /= (float)10.0;
	temp -= (float)5.0;
	return temp;
}
