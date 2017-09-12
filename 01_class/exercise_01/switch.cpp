#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	char operation;
	
	cout << "Type your first number here: ";
	cin >> n1;
	cout << "Type your second number here: ";
	cin >> n2;
	cout << "Type the desired operation((a)ddition, (s)ubtraction, (m)ultiplication or (d)ivision) here: ";
	cin >> operation;
	cout << "\n";
	
	switch(operation)
	{
		case 'a':
			cout << "n1 + n2 = " << n1 + n2 << endl;
			break;
		case 's':
			cout << "n1 - n2 = " << n1 - n2 << endl;
			break;
		case 'm':
			cout << "n1 * n2 = " << n1 * n2 << endl;
			break;
		case 'd':
			cout << "n1 / n2 = " << n1 / n2 << endl;
			break;
	}
	
	return 0;
}
