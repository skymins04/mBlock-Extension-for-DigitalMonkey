#include <Arduino.h>
#include "compassSen.h"

float compassSen::readAccel(int axis) {
	accel.begin();
	accel.getEvent(&event);
	switch(axis) {
	case 0: return event.acceleration.x;
	case 1: return event.acceleration.y;
	case 2: return event.acceleration.z;
	}
}

float compassSen::readMag(int axis) {
	mag.enableAutoRange(true);
	mag.begin();
	mag.getEvent(&event);
	switch(axis) {
	case 0: return event.magnetic.x;
	case 1: return event.magnetic.y;
	case 2: return event.magnetic.z;
	}
}
