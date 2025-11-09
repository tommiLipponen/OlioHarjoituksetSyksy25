#include "Tuote.h"
#include <iostream>

// Oletuskonstruktori
Tuote::Tuote() : nimi(""), hinta(0.0) {}

// Parametrillinen konstruktori
Tuote::Tuote(const std::string& nimi, double hinta) 
    : nimi(nimi), hinta(hinta) {}

// Getterit
std::string Tuote::getNimi() const {
    return nimi;
}

double Tuote::getHinta() const {
    return hinta;
}

// Setterit
void Tuote::setNimi(const std::string& nimi) {
    this->nimi = nimi;
}

void Tuote::setHinta(double hinta) {
    this->hinta = hinta;
}

// Tulostusmetodi
void Tuote::tulosta() const {
    std::cout << "Tuote: " << nimi << ", Hinta: " << hinta << " euroa" << std::endl;
}
