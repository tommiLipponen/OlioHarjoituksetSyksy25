#include <iostream>
#include <vector>
#include "Tuote.h"

using namespace std;

int main() {
    cout << "=== Tehtava 1: Olioiden tallentaminen listaan ===" << endl;
    
    // Luo vector-lista Tuote-olioille
    vector<Tuote> tuotteet;
    
    // Luo kolme tuotetta erikseen
    Tuote tuote1("Kahvi", 3.50);
    Tuote tuote2("Tee", 2.75);
    Tuote tuote3("Kaakao", 4.20);
    
    // Lis‰‰ tuotteet listaan push_back:lla
    tuotteet.push_back(tuote1);
    tuotteet.push_back(tuote2);
    tuotteet.push_back(tuote3);
    
    // Tulosta kaikkien tuotteiden tiedot silmukassa
    cout << "\nTuotteet listalla:" << endl;
    for (const auto& tuote : tuotteet) {
        tuote.tulosta();
    }
    
    return 0;
}
