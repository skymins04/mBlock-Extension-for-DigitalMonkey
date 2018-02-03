#ifndef compassSen_H
#define compassSen_H

#include "Adafruit_Sensor.h"
#include "Adafruit_LSM303_U.h"

class compassSen {
	private:
		Adafruit_LSM303_Accel_Unified accel = Adafruit_LSM303_Accel_Unified(54321);
		Adafruit_LSM303_Mag_Unified mag = Adafruit_LSM303_Mag_Unified(12345);
		sensors_event_t event;
	public:
		float readAccel(int axis);
		float readMag(int axis); 
};

#endif
