#ifndef DCmotor_h
#define DCmotor_h

class DCmotor {
	private:
		int _A;
		int _B;
	public:
		DCmotor(int A, int B);
		void turnMotor(int dir, int speed);
		void stopMotor();
};

#endif
