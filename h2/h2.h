#pragma once

#include <iostream>
#include <string>

// Tehtävä 1: Henkilo-luokka julkisilla jäsenmuuttujilla (HUONO TAPA - ei suositella)
// Kommentoitu pois, koska käytetään parempaa toteutusta alla
/*
class Henkilo {
public:
    std::string nimi;
    int ika;
};
*/

// Tehtävä 2 & 3: Henkilo-luokka privaateilla jäsenmuuttujilla, 
// Gettereilla, Settereilla, konstruktorilla ja tulostaTiedot-metodilla
class Henkilo {
private:
    std::string nimi;
    int ika;

public:
    // Tehtävä 3: Konstruktori
    Henkilo(std::string nimi, int ika);

    // Tehtävä 2: Getterit
    std::string getNimi() const;
    int getIka() const;

    // Tehtävä 2: Setterit
    void setNimi(std::string uusiNimi);
    void setIka(int uusiIka);

    // Tehtävä 2: Tulostusmetodi
    void tulostaTiedot() const;
};
