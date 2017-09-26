#include "Calendar.h"
#include "Clock.h"
//#include "Clock.cpp"
//#include "Calendar.cpp"
using namespace std;

class ClockCalendar : public Clock, public Calendar {
	public:
		ClockCalendar();
		ClockCalendar (int mo, int day, int yr, int hr, int min, int sec, int is_pm);
		void advance ();
};