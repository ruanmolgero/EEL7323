#include "operations.cpp"
using namespace std;

int main()
{
	int n1, n2;
	
	cout << "Digite o primeiro n�mero desejado: ";
	cin >> n1;
	cout << "Digite o segundo n�mero desejado: ";
	cin >> n2;
	cout << endl;
	
	cout << "n1 + n2 = " << addition(n1, n2) << endl;
		
	cout << "n1 - n2 = " << subtraction(n1, n2) << endl;
	
	cout << "n1 * n2 = " << multiplication(n1, n2) << endl;
	
	cout << "n1 / n2 = " << division(n1, n2) << endl;

	return 0;
}
