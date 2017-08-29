#include "ClockCalendar.h"
//#include "ClockCalendar.cpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	ClockCalendar c;	
	c.setClock(5,55,30,1);
	c.setCalendar(6,5,1995);
	//delete c;
	c.readClock();
	c.readCalendar();
	for(int i=0;i<6;i++)
	{
		c.advance();
		c.readClock();
	}	
	return 0;
}