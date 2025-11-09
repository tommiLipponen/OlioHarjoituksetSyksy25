#include <iostream>
#include <vector>
#include <string>
#include "Tuote.h"

using namespace std;

int main() {
    cout << "=== Tehtava 3: Tietojen lukeminen kayttajalta ===" << endl;
    
    // Luo vector-lista Tuote-olioille
    vector<Tuote> tuotteet;
    
    // Pyyd‰ k‰ytt‰j‰lt‰ viisi tuotetta
    cout << "\nSyota 5 tuotteen tiedot:" << endl;
    
    for (int i = 0; i < 5; i++) {
        string nimi;
        double hinta;
        
        cout << "\nTuote " << (i + 1) << ":" << endl;
        cout << "Anna tuotteen nimi: ";
        cin.ignore(); // Tyhjenn‰ puskuri ennen getline
        getline(cin, nimi);
        
        cout << "Anna tuotteen hinta: ";
        cin >> hinta;
        
        // Lis‰‰ tuote vektoriin emplace_back:lla
        tuotteet.emplace_back(nimi, hinta);
    }
    
    // Tulosta koko lista
    cout << "\n=== Kaikki tuotteet ===" << endl;
    for (size_t i = 0; i < tuotteet.size(); i++) {
        cout << (i + 1) << ". ";
        tuotteet[i].tulosta();
    }
    
    return 0;
}
