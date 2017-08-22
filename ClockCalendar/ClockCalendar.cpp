#include "ClockCalendar.h"
using namespace std

public class Clock 
{
	Clock()
	{
	
	};

	~Clock()
	{
	
	};

	public void setClock(int h, int s, int m, int pm)
	{
	   	this.h = h;
	   	this.s = s;
		this.m = m;
		this.pm = pm;	
	}

	public void readClock(int& h, int& s, int& m, int& pm)
	{
		cout << "Hora: " << h << endl;
		cout << "Minuto: " << m << end1;
		cout << "Segundo: " << s << end1;
		if(!pm)
		{
			cout << "AM" << endl;
		}	
		else 
		{
			cout << "PM" << endl;
		}
	}
	
	public void advance()
	{
		while(1)
	}
}

public class Calendar
{
	Calendar()
	{
	
	};

	~Calendar()
	{
	
	};
	
	public void setCalendar(int m, int d, int y)
	{
	   	this.m = m;
	   	this.d = d;
		this.y = y;
	}
	
	public void readCalendar(int& m, int& d, int& y)
	{
		cout << "Dias: " << d << endl;
		cout << "Mês: " << m << end1;
		cout << "Ano: " << y << end1;
		
	}
	
	public void advance()
	{
		//alguma ++
	}
}

ClockCalendar::ClockCalendar (int mt, int d, int y, int h, int m, int s, int pm)
:Clock (h, mn, s, pm), Calendar (mt, d, y)
{
	   	
}
