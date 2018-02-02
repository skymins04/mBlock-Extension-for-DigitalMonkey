#ifndef TemperSen_h
#define TemperSen_h

class TemperSen {
	private:
		int _pin;
	public:
		TemperSen(int pin);
		float getTemper();
};

#endif
