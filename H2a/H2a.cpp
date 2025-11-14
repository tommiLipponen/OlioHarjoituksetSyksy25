#include "H2a.h"
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"
#include <memory>

using namespace std;

int main()
{
	cout << "=== Car Demo ===" << endl;
	// Luo Car-olio pinomuistihin
	Car myCar;
	myCar.setBrand("Toyota");
	myCar.setModel("Corolla");
	myCar.setYearModel(2020);
	myCar.printData();
	
	cout << "\n=== Rectangle Demo ===" << endl;
	// Luo Rectangle-olio kekomuistiin
	Rectangle* myRectangle = new Rectangle();
	myRectangle->setWidth(5.0);
	myRectangle->setHeight(3.0);
	cout << "Area: " << myRectangle->getArea() << endl;
	cout << "Circumference: " << myRectangle->getCircum() << endl;
	delete myRectangle; // Tuhoa olio
	
	cout << "\n=== Student Demo ===" << endl;
	// Luo Student-olio smart pointerilla
	unique_ptr<Student> myStudent = make_unique<Student>();
	myStudent->setName("Matti Meikalainen");
	myStudent->setStudentNumber(12345);
	myStudent->setAverage(4.2);
	cout << "Name: " << myStudent->getName() << endl;
	cout << "Student Number: " << myStudent->getStudentNumber() << endl;
	cout << "Average: " << myStudent->getAverage() << endl;
	
	return 0;
}
