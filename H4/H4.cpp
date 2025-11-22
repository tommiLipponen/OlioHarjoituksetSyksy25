// H4.cpp : Defines the entry point for the application.
//

#include "H4.h"
#include "Car.h"

using namespace std;

int main()
{
	Car myCar("Toyota", "Corolla");
	myCar.setEngine();
	myCar.setWheels();
	myCar.printDetails();
	return 0;
}
