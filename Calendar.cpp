#include "Calendar.h"
#include <iostream>
using namespace std;

Calendar::Calendar(int mo, int day, int yr)
{
	
}

Calendar::Calendar()
{}

Calendar::~Calendar()
{}
	
void Calendar::setCalendar(int mo, int day, int yr)
{
   	this->mo = mo;
   	this->day = day;
	this->yr = yr;
}
	
void Calendar::readCalendar(/*int& mo, int& day, int& yr*/)
{
	cout << "Dias: " << this->day << endl;
	cout << "Mes: " << this->mo << endl;
	cout << "Ano: " << this->yr << endl;

}

void Calendar::advance()
{
	day++;
	if(mo == 1 || mo == 3 || mo == 5 || mo == 7 || mo == 8 || mo == 10 || mo == 12)
	{
		if (day == 32)
		{
			day = 1;
			mo++;
			if (mo == 13)
			{
				mo = 1;
				yr++;
			}
		}
	}
	if(mo == 4 || mo == 6 || mo == 9 || mo == 11)
	{
		if (day == 31)
		{
			day = 1;
			mo++;
			
		}
	}
	if(mo == 2)
	{
		if (day == 29)
		{
			day = 1;
			mo++;
			
		}
	}	
}
