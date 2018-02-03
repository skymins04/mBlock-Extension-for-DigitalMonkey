#include <Arduino.h>
#include "dmonkeyRTC.h"

boolean dmonkeyRTC::getTime(const char *str) {
	int Hour, Min, Sec; 
	if (sscanf(str, "%d:%d:%d", &Hour, &Min, &Sec) != 3) return false; 
	tm.Hour = Hour; 
	tm.Minute = Min; 
	tm.Second = Sec; 
	return true;
}

boolean dmonkeyRTC::getDate(const char *str) {
	char Month[12]; 
	int Day, Year; uint8_t monthIndex; 
	if (sscanf(str, "%s %d %d", Month, &Day, &Year) != 3) return false; 
	for (monthIndex = 0; monthIndex < 12; monthIndex++) { 
		if (strcmp(Month, monthName[monthIndex]) == 0) break; 
	} 
	if (monthIndex >= 12) return false; 
	tm.Day = Day; 
	tm.Month = monthIndex + 1; 
	tm.Year = CalendarYrToTm(Year); 
	return true; 
}

void dmonkeyRTC::setRTC() {
	if(getDate(__DATE__)&&getTime(__TIME__)) RTC.write(tm);
}

String dmonkeyRTC::readTime() {
	RTC.read(tm);
	String Time = String(tm.Hour) + String(":") + String(tm.Minute) + String(":") + String(tm.Second);
	return Time; 
}

String dmonkeyRTC::readDate() {
	RTC.read(tm);
	String Date = tmYearToCalendar(tm.Year) + String("-") + tm.Month + String("-") + tm.Day;
	return Date;
}
