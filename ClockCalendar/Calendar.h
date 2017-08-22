#include <string>
using namespace std;

class Calendar {
	protected:
        int mo;
        int day;
        int yr;
    public:
        Calendar (int m, int d, int y);
        void setCalendar(int m, int d, int y);
        void readCalendar(int& m, int& d, int& y);
        void advance();
};