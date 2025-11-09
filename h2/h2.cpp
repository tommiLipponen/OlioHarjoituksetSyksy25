#include "h2.h"

using namespace std;

// Tehtävä 1: Käyttöesimerkki julkisilla jäsenmuuttujilla (HUONO TAPA - kommentoitu pois)
/*
int main() {
    Henkilo henkilo1;
    henkilo1.nimi = "Matti Meikäläinen";  // Suora muuttujaan pääsy - huono tapa!
    henkilo1.ika = 25;
    
    cout << "Nimi: " << henkilo1.nimi << endl;
    cout << "Ikä: " << henkilo1.ika << endl;
    
    return 0;
}
*/

// Tehtävä 3: Konstruktorin toteutus
Henkilo::Henkilo(string nimi, int ika) {
    this->nimi = nimi;
    this->ika = ika;
}

// Tehtävä 2: Getterien toteutus
string Henkilo::getNimi() const {
    return nimi;
}

int Henkilo::getIka() const {
    return ika;
}

// Tehtävä 2: Setterien toteutus
void Henkilo::setNimi(string uusiNimi) {
    nimi = uusiNimi;
}

void Henkilo::setIka(int uusiIka) {
    ika = uusiIka;
}

// Tehtävä 2: Tulostusmetodin toteutus
void Henkilo::tulostaTiedot() const {
    cout << "Nimi: " << nimi << endl;
    cout << "Ikä: " << ika << endl;
}

int main()
{
    cout << "=== Tehtävä 2: Käytetään settereita ===" << endl;
    Henkilo henkilo1("", 0);  // Luodaan tyhjällä konstruktorilla
    henkilo1.setNimi("Matti Meikäläinen");
    henkilo1.setIka(25);
    henkilo1.tulostaTiedot();
    
    cout << endl << "=== Tehtävä 3: Käytetään konstruktoria ===" << endl;
    Henkilo henkilo2("Maija Virtanen", 30);
    henkilo2.tulostaTiedot();
    
    cout << endl << "=== Käytetään gettereita ===" << endl;
    cout << "Henkilön nimi: " << henkilo2.getNimi() << endl;
    cout << "Henkilön ikä: " << henkilo2.getIka() << endl;

    return 0;
}
