#include <Arduino.h>
#include "TrafficLight.h"

TrafficLight::TrafficLight(int Stop, int Slow, int Go) {
	_Stop = Stop; pinMode(_Stop, OUTPUT);
	_Slow = Slow; pinMode(_Slow, OUTPUT);
	_Go = Go; pinMode(_Go, OUTPUT);
}

void TrafficLight::turnOn(int onLED, int time) {
	switch(onLED) {
	case 0: 
		digitalWrite(_Stop,HIGH);
		delay(time);
	break;
	case 1: 
		digitalWrite(_Slow,HIGH);
		delay(time);
	break;
	case 2: 
		digitalWrite(_Go,HIGH);
		delay(time);
	break;
	}
}

void TrafficLight::turnOff(int offLED, int time) {
	switch(offLED) {
	case 0: 
		digitalWrite(_Stop,LOW);
		delay(time);
	break;
	case 1: 
		digitalWrite(_Slow,LOW);
		delay(time);
	break;
	case 2: 
		digitalWrite(_Go,LOW);
		delay(time);
	break;
	}
}

void TrafficLight::OFFnON(int offLED, int onLED, int time) {
	switch(offLED) {
	case 0: 
		switch(onLED) {
		case 0:
			digitalWrite(_Stop,LOW);
			digitalWrite(_Stop,HIGH);
			delay(time);	
		break;
		case 1:
			digitalWrite(_Stop,LOW);
			digitalWrite(_Slow,HIGH);
			delay(time);
		break;
		case 2:
			digitalWrite(_Stop,LOW);
			digitalWrite(_Go,HIGH);
			delay(time);
		break;
		}
	break;
	case 1: 
		switch(onLED) {
		case 0:
			digitalWrite(_Slow,LOW);
			digitalWrite(_Stop,HIGH);
			delay(time);
		break;
		case 1:
			digitalWrite(_Slow,LOW);
			digitalWrite(_Slow,HIGH);
			delay(time);
		break;
		case 2:
			digitalWrite(_Slow,LOW);
			digitalWrite(_Go,HIGH);
			delay(time);
		break;
		}
	break;
	case 2: 
		switch(onLED) {
		case 0:
			digitalWrite(_Go,LOW);
			digitalWrite(_Stop,HIGH);
			delay(time);
		break;
		case 1:
			digitalWrite(_Go,LOW);
			digitalWrite(_Slow,HIGH);
			delay(time);
		break;
		case 2:
			digitalWrite(_Go,LOW);
			digitalWrite(_Go,HIGH);
			delay(time);
		break;
		}
	break;
	}
}
