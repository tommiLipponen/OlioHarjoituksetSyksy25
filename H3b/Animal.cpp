#include "Animal.h"
#include "Dog.h"

using namespace std;

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}

Animal::~Animal()
{
    cout << "Animal-olio tuhotaan." << endl;
}

int main()
{
    cout << "Luodaan Animal-olio:" << endl;
    Animal* animal = new Animal();
    animal->callOut();
    delete animal;

    cout << "\nLuodaan Dog-olio:" << endl;
    Dog* dog = new Dog();
    dog->callOut();
    delete dog;

    return 0;
}
