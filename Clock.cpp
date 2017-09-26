#include "Clock.h"
#include "time.h"
#include <iostream>
using namespace std;


Clock::Clock(int hr, int sec, int min, int is_pm)
{
	
}

Clock::Clock()
{}

Clock::~Clock()
{}

void Clock::setClock(int hr, int sec, int min, int is_pm)
{
   	this->hr = hr;
   	this->sec = sec;
	this->min = min;
	this->is_pm = is_pm;	
}

void Clock::readClock(/*int& hr, int& sec, int& min, int& is_pm*/)
{
	cout << "Hora: " << this->hr << endl;
	cout << "Minuto: " << this->min << endl;
	cout << "Segundo: " << this->sec << endl;
	if(!this->is_pm)
	{
		cout << "AM" << endl;
	}	
	else 
	{
		cout << "PM" << endl;
	}
}

void Clock::advance()
{
	sec++;	
	if (sec==60)
	{
		sec = 0;
		min++;
		if(min==60)
		{
			min = 0;
			hr++;
			if (hr==12)
			{
				is_pm = !is_pm;
			}
			else if (hr==13)
			{
				hr = 1;
			}
		}
	}				
}

