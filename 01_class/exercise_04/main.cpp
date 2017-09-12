#include "person.cpp"
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
	cout << endl;
	
	printPerson(person1);
	
	return 0;
}
