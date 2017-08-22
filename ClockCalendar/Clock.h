#include <string>
using namespace std;

class Clock {
	protected:
        int hr;
        int min;
        int sec;
        int is_pm;
    public:
        Clock(int h, int s, int m, int pm);
        void setClock(int h, int s, int m,int pm);
        void readClock(int& h, int& s, int& m,int& pm);
        void advance();
};