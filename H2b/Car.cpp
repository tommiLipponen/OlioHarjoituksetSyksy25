#include "Car.h"
#include <vector>

using namespace std;

// Konstruktorin toteutus
Car::Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {
}

// printData-metodin toteutus
void Car::printData() const {
    cout << "Brand: " << brand << ", Model: " << model << ", Year: " << yearModel << endl;
}

int main()
{
    // Luodaan vektori autoille
    vector<Car> carList;
    
    // Lisätään kolme Car-oliota listaan
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volkswagen", "Golf", 2019));
    carList.push_back(Car("Ford", "Focus", 2021));
    
    // Tulostetaan toisen alkion tiedot (indeksi 1)
    cout << "Second car in the list:" << endl;
    carList[1].printData();
    
    cout << "\nAll cars in the list:" << endl;
    // Tulostetaan kaikki autot käyttämällä for-silmukkaa
    for (const auto& car : carList) {
        car.printData();
    }
    
    return 0;
}
