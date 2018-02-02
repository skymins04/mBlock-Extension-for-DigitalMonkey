#ifndef RGBled_h
#define RGBled_h

class RGBled {
	public:
		RGBled(int R, int G, int B);
		void setRGB(int R, int G, int B);
	private:
		int _R;
		int _G;
		int _B;
};

#endif
