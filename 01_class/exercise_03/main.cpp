#include "float_operations.cpp"
using namespace std;

int main()
{
	float n1, n2;
	
	cout << "Type the first float number desired: ";
	cin >> n1;
	cout << "Type the second float number desired: ";
	cin >> n2;
	cout << endl;
	
	cout << "n1 + n2 = " << addition(n1, n2) << endl;
		
	cout << "n1 - n2 = " << subtraction(n1, n2) << endl;
	
	cout << "n1 * n2 = " << multiplication(n1, n2) << endl;
	
	cout << "n1 / n2 = " << division(n1, n2) << endl;

	return 0;
}
