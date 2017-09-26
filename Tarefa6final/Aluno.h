#include "ClockCalendar.cpp"
#include <string>
using namespace std;

class Aluno
{
     private:
     int matr;
     float n1;
     float n2;
     public:
     void setMatr(int matr);
     void setN1(float nota1);
     void setN2(float nota2);
     /*void setClockCalendar(int hr, int sec, int min, int is_pm, int mo, int day, int yr);*/
     int getMatr();
     float getN1();
     float getN2();
     /*ClockCalendar getClock();
     ClockCalendar getCalendar();*/
	 float calcMedia();
};