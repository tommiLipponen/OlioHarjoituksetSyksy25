#include <iostream>
#include <vector>
#include "Tuote.h"

using namespace std;

// Funktio kalleimman tuotteen etsimiseen
Tuote etsiKallein(const vector<Tuote>& tuotteet) {
    if (tuotteet.empty()) {
        return Tuote();
    }
    
    Tuote kallein = tuotteet[0];
    for (size_t i = 1; i < tuotteet.size(); i++) {
        if (tuotteet[i].getHinta() > kallein.getHinta()) {
            kallein = tuotteet[i];
        }
    }
    return kallein;
}

// Funktio halvan tuotteen etsimiseen
Tuote etsiHalvin(const vector<Tuote>& tuotteet) {
    if (tuotteet.empty()) {
        return Tuote();
    }
    
    Tuote halvin = tuotteet[0];
    for (size_t i = 1; i < tuotteet.size(); i++) {
        if (tuotteet[i].getHinta() < halvin.getHinta()) {
            halvin = tuotteet[i];
        }
    }
    return halvin;
}

// Funktio keskihinnan laskemiseen
double laskeKeskihinta(const vector<Tuote>& tuotteet) {
    if (tuotteet.empty()) {
        return 0.0;
    }
    
    double summa = 0.0;
    for (const auto& tuote : tuotteet) {
        summa += tuote.getHinta();
    }
    return summa / tuotteet.size();
}

int main() {
    cout << "=== KAIKKI TEHTAVAT YHDESSA ===" << endl;
    
    vector<Tuote> tuotteet;
    
    // Tehtävä 1: push_back
    cout << "\n1. Lisataan tuotteita push_back:lla" << endl;
    Tuote t1("Kahvi", 3.50);
    Tuote t2("Tee", 2.75);
    tuotteet.push_back(t1);
    tuotteet.push_back(t2);
    
    // Tehtävä 2: emplace_back
    cout << "2. Lisataan tuotteita emplace_back:lla" << endl;
    tuotteet.emplace_back("Kaakao", 4.20);
    tuotteet.emplace_back("Suklaa", 5.90);
    tuotteet.emplace_back("Keksi", 1.50);
    
    // Tulosta kaikki tuotteet
    cout << "\n=== KAIKKI TUOTTEET ===" << endl;
    for (size_t i = 0; i < tuotteet.size(); i++) {
        cout << (i + 1) << ". ";
        tuotteet[i].tulosta();
    }
    
    // Tehtävä 4: Etsi kallein ja halvin
    cout << "\n=== ANALYYSI ===" << endl;
    Tuote kallein = etsiKallein(tuotteet);
    cout << "Kallein tuote: ";
    kallein.tulosta();
    
    Tuote halvin = etsiHalvin(tuotteet);
    cout << "Halvin tuote: ";
    halvin.tulosta();
    
    double keskihinta = laskeKeskihinta(tuotteet);
    cout << "Keskihinta: " << keskihinta << " euroa" << endl;
    
    cout << "\nTuotteita yhteensa: " << tuotteet.size() << endl;
    
    return 0;
}
