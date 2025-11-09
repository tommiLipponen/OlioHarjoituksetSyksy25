#include <iostream>
#include <vector>
#include "Tuote.h"

using namespace std;

int main() {
    cout << "=== Tehtava 2: Kayta emplace_back-metodia ===" << endl;
    
    // Luo vector-lista Tuote-olioille
    vector<Tuote> tuotteet;
    
    // Lis‰‰ tuotteet suoraan vektoriin emplace_back:lla
    // emplace_back luo olion suoraan vektoriin ilman kopiointia
    tuotteet.emplace_back("Kahvi", 3.50);
    tuotteet.emplace_back("Tee", 2.75);
    tuotteet.emplace_back("Kaakao", 4.20);
    
    // Tulosta kaikkien tuotteiden tiedot silmukassa
    cout << "\nTuotteet listalla:" << endl;
    for (const auto& tuote : tuotteet) {
        tuote.tulosta();
    }
    
    return 0;
}
