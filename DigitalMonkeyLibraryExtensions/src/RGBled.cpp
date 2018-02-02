#include <Arduino.h>
#include "RGBled.h"

RGBled::RGBled(int R, int G, int B) {
	pinMode(R, OUTPUT); _R = R;
	pinMode(G, OUTPUT); _G = G;
	pinMode(B, OUTPUT); _B = B;
}

void RGBled::setRGB(int R, int G, int B) {
	analogWrite(_R,R);
	analogWrite(_G,G);
	analogWrite(_B,B);
}
