#include "h3.h"
#include <vector>

using namespace std;

// ===== HENKILO-LUOKAN TOTEUTUS =====

Henkilo::Henkilo(string nimi, int ika) {
    this->nimi = nimi;
    this->ika = ika;
}

string Henkilo::getNimi() const {
    return nimi;
}

int Henkilo::getIka() const {
    return ika;
}

void Henkilo::setNimi(string uusiNimi) {
    nimi = uusiNimi;
}

void Henkilo::setIka(int uusiIka) {
    ika = uusiIka;
}

void Henkilo::tulostaTiedot() const {
    cout << "Nimi: " << nimi << endl;
    cout << "Ika: " << ika << endl;
}

// ===== OPISKELIJA-LUOKAN TOTEUTUS =====

Opiskelija::Opiskelija(string nimi, int ika, string opiskelijanumero)
    : Henkilo(nimi, ika) {  // Kutsutaan kantaluokan konstruktoria
    this->opiskelijanumero = opiskelijanumero;
}

string Opiskelija::getOpiskelijanumero() const {
    return opiskelijanumero;
}

void Opiskelija::setOpiskelijanumero(string uusiNumero) {
    opiskelijanumero = uusiNumero;
}

void Opiskelija::tulostaTiedot() const {
    // Kutsutaan kantaluokan metodia tulostamaan nimi ja ikä
    Henkilo::tulostaTiedot();
    // Lisätään opiskelijanumeron tulostus
    cout << "Opiskelijanumero: " << opiskelijanumero << endl;
}

// ===== MAIN-FUNKTIO =====

int main() {
    cout << "=== Tehtava 1: Yksinkertainen perinta ===" << endl;
    
    // Luodaan Henkilo-olio
    cout << "\nHenkilo-olio:" << endl;
    Henkilo henkilo1("Matti Meikalainen", 35);
    henkilo1.tulostaTiedot();
    
    // Luodaan Opiskelija-olio
    cout << "\nOpiskelija-olio:" << endl;
    Opiskelija opiskelija1("Liisa Oppilas", 22, "H1234567");
    opiskelija1.tulostaTiedot();
    
    // Käytetään perittyjä metodeja
    cout << "\nKaytetaan perittya metodeja:" << endl;
    cout << "Opiskelijan nimi: " << opiskelija1.getNimi() << endl;
    cout << "Opiskelijan ika: " << opiskelija1.getIka() << endl;
    cout << "Opiskelijanumero: " << opiskelija1.getOpiskelijanumero() << endl;
    
    cout << "\n\n=== Tehtava 2: Perityt oliot vektorissa ===" << endl;
    
    // Luodaan vektori, joka sisältää osoittimia Henkilo-olioihin
    vector<Henkilo*> henkilot;
    
    // Lisätään sekä Henkilo- että Opiskelija-olioita (polymorfismi!)
    henkilot.push_back(new Henkilo("Anna Virtanen", 28));
    henkilot.push_back(new Opiskelija("Pekka Opiskelija", 21, "H2345678"));
    henkilot.push_back(new Henkilo("Jari Korhonen", 45));
    henkilot.push_back(new Opiskelija("Sanna Student", 23, "H3456789"));
    
    // Tulostetaan kaikkien henkilöiden tiedot
    cout << "\nKaikki henkilot vektorissa:" << endl;
    cout << "-----------------------------" << endl;
    for (size_t i = 0; i < henkilot.size(); i++) {
        cout << "\nHenkilo " << (i + 1) << ":" << endl;
        // Virtual-funktion ansiosta kutsutaan oikeaa toteutusta!
        henkilot[i]->tulostaTiedot();
    }
    
    // TÄRKEÄÄ: Vapautetaan dynaamisesti varattu muisti
    cout << "\n-----------------------------" << endl;
    cout << "Vapautetaan muisti..." << endl;
    for (Henkilo* henkilo : henkilot) {
        delete henkilo;
    }
    henkilot.clear();
    cout << "Muisti vapautettu!" << endl;
    
    return 0;
}
