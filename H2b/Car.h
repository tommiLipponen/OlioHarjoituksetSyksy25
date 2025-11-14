#pragma once

#include <iostream>
#include <string>

// TODO: Viittaa lisäksi muihin otsikkotiedostoihin, joita ohjelmasi tarvitsee.

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori
    Car(std::string b, std::string m, int y);
    
    // Metodi auton tietojen tulostamiseen
    void printData() const;
};
