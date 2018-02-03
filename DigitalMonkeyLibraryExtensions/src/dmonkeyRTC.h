#ifndef dmonkeyRTC_H
#define dmonkeyRTC_H

#include "DS1307RTC.h"
#include "TimeLib.h"

class dmonkeyRTC {
	private:
		tmElements_t tm;
		const char *monthName[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
		boolean getTime(const char *str);
		boolean getDate(const char *str);
	public:
		void setRTC();
		String readTime();
		String readDate();
};

#endif
