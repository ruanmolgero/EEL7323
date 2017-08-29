#include "Clock.h"
#include "time.h"
#include <iostream>
using namespace std;

/*int gasta_tempo (int n) 
{
	int i,j;
	int freq=n-1;
	for (i=0; i<=n; ++i) 
	{
		for (j=0;j< 2;++j);
	}   
	return freq;
} */

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
{	/* colocar em loop
	//int s = 0;
	int conta;
	clock_t inicio,fim;
	inicio = clock(); //comeca a contar os ticks
	conta = gasta_tempo(999); // delay
	fim = clock(); // final dos ticks
	if ((fim - inicio)/CLOCKS_PER_SEC == 1) // calcula se foi um segundo inteiro
	{
		s++; // incrementa o segundo
	} */
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

