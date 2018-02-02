#include <Arduino.h>
#include "DCmotor.h"

DCmotor::DCmotor(int A, int B) {
	pinMode(_A=A,OUTPUT);
	pinMode(_B=B,OUTPUT);
}

void DCmotor::turnMotor(int dir, int speed) {
	switch(dir) {
	case 0:
		analogWrite(_A,0);
		analogWrite(_B,speed);
	break;
	case 1:
		analogWrite(_A,speed);
		analogWrite(_B,0);
	break;
	}
}

void DCmotor::stopMotor() {
	digitalWrite(_A,LOW);
	digitalWrite(_B,LOW);
}
