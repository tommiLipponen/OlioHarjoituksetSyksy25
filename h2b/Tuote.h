#ifndef TUOTE_H
#define TUOTE_H

#include <string>

class Tuote {
private:
    std::string nimi;
    double hinta;

public:
    // Konstruktorit
    Tuote();
    Tuote(const std::string& nimi, double hinta);

    // Getterit
    std::string getNimi() const;
    double getHinta() const;

    // Setterit
    void setNimi(const std::string& nimi);
    void setHinta(double hinta);

    // Tulostusmetodi
    void tulosta() const;
};

#endif // TUOTE_H
