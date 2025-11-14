#include "Car.h"
#include <iostream>

void Car::printData()
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year Model: " << yearModel << std::endl;
}

void Car::setBrand(std::string b)
{
    brand = b;
}

void Car::setModel(std::string m)
{
    model = m;
}

void Car::setYearModel(int y)
{
    yearModel = y;
}
