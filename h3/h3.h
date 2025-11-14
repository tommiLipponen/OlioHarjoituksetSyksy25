#pragma once

#include <iostream>
#include <string>
#include <vector>

// Kantaluokka: Henkilo
class Henkilo {
private:
    std::string nimi;
    int ika;

public:
    // Konstruktori
    Henkilo(std::string nimi, int ika);

    // Virtual destruktori (tarkeaa polymorfismissa!)
    virtual ~Henkilo() = default;

    // Getterit
    std::string getNimi() const;
    int getIka() const;

    // Setterit
    void setNimi(std::string uusiNimi);
    void setIka(int uusiIka);

    // Virtual tulostusmetodi (mahdollistaa polymorfismin)
    virtual void tulostaTiedot() const;
};

// Aliluokka: Opiskelija perii Henkilo-luokan
class Opiskelija : public Henkilo {
private:
    std::string opiskelijanumero;

public:
    // Konstruktori
    Opiskelija(std::string nimi, int ika, std::string opiskelijanumero);

    // Getter opiskelijanumerolle
    std::string getOpiskelijanumero() const;

    // Setter opiskelijanumerolle
    void setOpiskelijanumero(std::string uusiNumero);

    // Ylikirjoitettu tulostaTiedot-metodi (override)
    void tulostaTiedot() const override;
};
