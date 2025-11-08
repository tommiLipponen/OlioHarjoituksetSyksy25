#include "h1.h"

using namespace std;

void calcSum(int a, int b)
{
	int sum = a + b;
	cout << "Summa: " << a << " + " << b << " = " << sum << endl;
}

void calcDiv(int a, int b)
{
	if (b == 0)
	{
		cout << "Virhe: Jakaja ei voi olla nolla!" << endl;
		return;
	}
	double quotient = static_cast<double>(a) / b;
	cout << "Osamaara: " << a << " / " << b << " = " << quotient << endl;
}

int retSum(int a, int b)
{
	return a + b;
}

float retDiv(int a, int b)
{
	if (b == 0)
	{
		throw std::runtime_error("jakaja ei saa olla nolla!");
	}
	return static_cast<float>(a) / b;
}

int main()
{
	int a, b;
	
	cout << "Anna ensimmainen luku: ";
	cin >> a;
	
	cout << "Anna toinen luku: ";
	cin >> b;
	
	cout << "a = " << a << ", b = " << b << endl;
	
	calcSum(a, b);
	calcDiv(a, b);
	
	int sumResult = retSum(a, b);
	cout << a << " + " << b << " = " << sumResult << endl;
	
	try {
		float result = retDiv(a, b);
		cout << a << "/" << b << " = " << result << endl;
	} catch (runtime_error& e) {
		cout << "Error: " << e.what() << endl;
	}
	
	return 0;
}
