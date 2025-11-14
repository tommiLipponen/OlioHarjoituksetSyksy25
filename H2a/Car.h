#pragma once

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData();
    void setBrand(std::string b);
    void setModel(std::string m);
    void setYearModel(int y);
};

//kommentteja hiottu
