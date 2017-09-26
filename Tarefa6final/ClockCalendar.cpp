#include "ClockCalendar.h"
//#include "Clock.cpp"
//#include "Calendar.cpp"
#include <iostream>
using namespace std;

ClockCalendar::ClockCalendar (int mo, int day, int yr, int hr, int min, int sec, int is_pm) : Clock (hr, min, sec, is_pm), Calendar (mo, day, yr)
{
	  	
}

ClockCalendar::ClockCalendar() : Clock (), Calendar () 
{}

void ClockCalendar::advance()
{
	Clock::advance();
	if (hr == 12 && min == 0 && sec==0 && is_pm == false)
	{
		Calendar::advance();
	}
}