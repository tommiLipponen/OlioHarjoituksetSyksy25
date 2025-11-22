#include "Car.h"
#include <iostream>

Car::Car() : model(""), brand("") {
}

Car::Car(const std::string& b, const std::string& m) : model(m), brand(b) {
}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

std::string Car::getModel() const {
    return model;
}

void Car::setModel(const std::string& m) {
    model = m;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const std::string& b) {
    brand = b;
}

void Car::printDetails() const {
    std::cout << "Auto : " << model << " " << brand << std::endl;
    std::cout << "Moottori: " << objEngine.getHorsepower() << " hp, " 
              << objEngine.getDisplacement() << " L" << std::endl;
    std::cout << "Rengas 1:" << objWheel1.getSize() << " tuumaa, " 
              << objWheel1.getType() << std::endl;
    std::cout << "Rengas 2:" << objWheel2.getSize() << " tuumaa, " 
              << objWheel2.getType() << std::endl;
    std::cout << "Rengas 3:" << objWheel3.getSize() << " tuumaa, " 
              << objWheel3.getType() << std::endl;
    std::cout << "Rengas 4:" << objWheel4.getSize() << " tuumaa, " 
              << objWheel4.getType() << std::endl;
}
