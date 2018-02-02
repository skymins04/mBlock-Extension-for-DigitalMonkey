#ifndef TrafficLight_h
#define TrafficLight_h

class TrafficLight {
	private:
		int _Stop;
		int _Slow;
		int _Go;
	public:
		TrafficLight(int Stop, int Slow, int Go);
		void turnOn(int onLED, int time);
		void turnOff(int offLED, int time);
		void OFFnON(int offLED, int onLED, int time);
};

#endif
