#include "Aluno.cpp"
#include "ClockCalendar.cpp"
using namespace std;

void Aluno::setMatr(int matricula)
{
    matr = matricula;
}
void Aluno::setN1(float nota1)
{
    n1 = nota1;
}
void Aluno::setN2(float nota2)
{
    n2 = nota2;
}
/*void Aluno::setClockCalendar(int hr, int sec, int min, int is_pm, int mo, int day, int yr)
{
 	c.setClock(hr,sec,min,is_pm);
	c.setCalendar(mo,day,hr);
}*/
int Aluno::getMatr()
{
    return matr;
}
float Aluno::getN1()
{
    return n1;
}
float Aluno::getN2()
{
    return n2;
}
/*ClockCalendar Aluno::getClock()
{
	return (c.readClock());
}
ClockCalendar Aluno::getCalendar()
{
	return (c.readCalendar());
}*/
float Aluno::calcMedia()
{
    return (n1+n2)/2;
}