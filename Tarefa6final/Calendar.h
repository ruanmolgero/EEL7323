#include <string>
using namespace std;

class Calendar {
	public:
        int mo;
        int day;
        int yr;
    public:
    	Calendar();
    	~Calendar();        
        Calendar (int mo, int day, int yr);
        void setCalendar(int mo, int day, int yr);
        void readCalendar(/*int& mo, int& day, int& yr*/);
        void advance();
};