#include "ClockCalendar.h"
#include "timer.h"
using namespace std

int gasta_tempo (int n) 
{
	int i,j;
	int freq=n-1;
	for (i=0; i<=n; ++i) 
	{
		for (j=0;j< 2;++j);
	}   
	return freq;
}

public class Clock 
{
	Clock()
	{
	
	};

	~Clock()
	{
	
	};

	public void setClock(int h, int s, int m, int is_pm)
	{
	   	this.h = h;
	   	this.s = s;
		this.m = m;
		this.is_pm = is_pm;	
	}

	public void readClock(int& h, int& s, int& m, int& is_pm)
	{
		cout << "Hora: " << h << endl;
		cout << "Minuto: " << m << end1;
		cout << "Segundo: " << s << end1;
		if(!is_pm)
		{
			cout << "AM" << endl;
		}	
		else 
		{
			cout << "PM" << endl;
		}
	}
	
	public void advance()
	{	// colocar em loop
		int s = 0;
		int conta;
		clock_t inicio,fim;
		inicio = clock(); //comeca a contar os ticks
		conta = gasta_tempo(999); // delay
		fim = clock(); // final dos ticks
		if ((fim - inicio)/CLOCKS_PER_SEC == 1) // calcula se foi um segundo inteiro
		{
			s++; // incrementa o segundo
		}		
		if (s==60)
		{
			s = 0;
			m++;
			if(m==60)
			{
				m = 0;
				h++;
				if (h==12)
				{
					is_pm = !is_pm;
				}
				else if (h==13)
				{
					h = 1;
				}
			}
		}				
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
		d++;
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if (d == 32)
			{
				d = 1;
				m++;
				if (m == 13)
				{
					m = 1;
					y++;
				}
			}
		}
		if(m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d == 31)
			{
				d = 1;
				m++;
				
			}
		}
		if(m == 2)
		{
			if (d == 29)
			{
				d = 1;
				m++;
				
			}
		}	
	}
}

ClockCalendar::ClockCalendar (int mt, int d, int y, int h, int m, int s, int is_pm)
:Clock (h, mn, s, is_pm), Calendar (mt, d, y)
{
	   	
}

void ClockCalendar::advance()
{
	Clock::advance();
	if (h == 12 && m == 0 && s==0 && is_pm!=false)
	{
		Calendar::advance();
	}
}
