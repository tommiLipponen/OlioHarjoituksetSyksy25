#include <iostream>
#include <vector>
#include "Tuote.h"

using namespace std;

// Funktio, joka etsii ja palauttaa kalleimman tuotteen
Tuote etsiKallein(const vector<Tuote>& tuotteet) {
    if (tuotteet.empty()) {
        return Tuote(); // Palauta tyhjä tuote jos lista on tyhjä
    }
    
    Tuote kallein = tuotteet[0];
    
    // Käy läpi kaikki tuotteet ja etsi kallein
    for (size_t i = 1; i < tuotteet.size(); i++) {
        if (tuotteet[i].getHinta() > kallein.getHinta()) {
            kallein = tuotteet[i];
        }
    }
    
    return kallein;
}

int main() {
    cout << "=== Tehtava 4: Kalleimman tuotteen etsiminen ===" << endl;
    
    // Luo vector-lista ja lisää tuotteita
    vector<Tuote> tuotteet;
    
    tuotteet.emplace_back("Kahvi", 3.50);
    tuotteet.emplace_back("Tee", 2.75);
    tuotteet.emplace_back("Kaakao", 4.20);
    tuotteet.emplace_back("Suklaa", 5.90);
    tuotteet.emplace_back("Keksi", 1.50);
    
    // Tulosta kaikki tuotteet
    cout << "\nKaikki tuotteet:" << endl;
    for (const auto& tuote : tuotteet) {
        tuote.tulosta();
    }
    
    // Etsi kallein tuote
    Tuote kallein = etsiKallein(tuotteet);
    
    // Tulosta kalleimman tuotteen tiedot
    cout << "\nKallein tuote on:" << endl;
    kallein.tulosta();
    
    return 0;
}
