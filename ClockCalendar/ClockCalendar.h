#include <string>
#include "Calendar.h"
#include "Clock.h"
using namespace std;

class ClockCalendar : public Clock, public Calendar {
	public:
		ClockCalendar (int mt, int d, int y, int h, int m, int s, int is_pm);
		void advance ();
};