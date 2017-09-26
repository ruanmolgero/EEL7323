#include <string.h>
using namespace std;

class Clock {
	public:
        int hr;
        int min;
        int sec;
        int is_pm;
    public:
    	Clock();
    	~Clock();
        Clock(int hr, int sec, int min, int is_pm);
        void setClock(int hr, int sec, int min,int is_pm);
        void readClock(/*int& hr, int& sec, int& min,int& is_pm*/);
        void advance();
};