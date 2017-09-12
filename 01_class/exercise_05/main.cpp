#include "person_data.cpp"
using namespace std;

int main()
{
	struct Person person1;
	
	cout << "Type your name: ";
	cin.getline (person1.name,80);
	cout << "Type your age: ";
	cin >> person1.age;
	cout << "Type your weight: ";
	cin >> person1.weight;
	cout << "Type your birth month (MM): ";
	cin >> person1.birth.month;
	cout << "Type your birth day (DD): ";
	cin >> person1.birth.day;
	cout << "Type your birth year (YYYY): ";
	cin >> person1.birth.year;	
	cout << endl;
	
	printPerson(person1);
	
	return 0;
}
