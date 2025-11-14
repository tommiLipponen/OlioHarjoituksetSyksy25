#pragma once
#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(std::string chefName);
    ~Chef();
    void makeSalad();
    void makeSoup();
};
