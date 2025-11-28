// main.cpp : Defines the entry point for the application1.

#include "main.h"
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	
	cout << "Osoitin:" << endl;
	// Tulosta muuttujan a arvo ja osoite
	cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
	
	// Lisaa osoitinmuuttuja pointerA ja sijoita siihen muuttujan a osoite
	int *pointerA = &a;
	
	// Tulosta osoittimen osoittaman muistipaikan osoite
	cout << "Pointterin osoittama osoite on: " << pointerA << endl;
	
	// Tulosta osoittimen osoittaman muistipaikan sisalto
	cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;
	
	int &refA = a;
	
	cout << "Referenssi:" << endl;
	// Tulosta refA:n osoittama osoite
	cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
	
	// Tulosta refA:n osoittaman muistipaikan sisalto
	cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
	
	// Lisaa muuttuja int muuttuja b ja anna sen arvoksi 6
	int b = 6;
	
	cout << "\nKokeilun jalkeen:" << endl;
	// Kokeile voitko muuttaa pointerA:n osoittamaan b:n osoitteeseen?
	pointerA = &b; // Tama TOIMII - pointteri voi osoittaa eri muistipaikkaan
	
	cout << "pointerA osoittaa nyt osoitteeseen: " << pointerA << endl;
	cout << "pointerA:n osoittaman muistipaikan arvo on: " << *pointerA << endl;
	
	cout << "\nErot:" << endl;
	cout << "pointerA (osoite johon pointteri osoittaa): " << pointerA << endl;
	cout << "*pointerA (osoitteen sisalto): " << *pointerA << endl;
	cout << "refA (muuttujan arvo): " << refA << endl;
	cout << "&refA (muuttujan osoite): " << &refA << endl;
	
	cout << "\n=== Olio argumenttina ===" << endl;
	
	ClassB objB;
	objB.setInfo("Olion B asettama info");
	
	ClassA1 objA1(objB);
	objA1.setBinfo("Olion objA1 asettama info");
	
	cout << "objB: " << objB.getInfo() << endl;
	cout << "objA1: " << objA1.getBinfo() << endl;
	
	cout << "\n=== Referenssi argumenttina ===" << endl;
	
	ClassB &refB = objB;
	ClassA2 objA2(refB);
	objA2.setBinfo("Olion Agr asettama info");
	cout << "objB: " << objB.getInfo() << endl;
	cout << "objA2 " << objA2.getBinfo() << endl;
	cout << endl;
	
	return 0;
}
