#pragma once
#include "Chef.h"
#include <string>

class ItalianChef : public Chef {
public:
    ItalianChef(std::string chefName);
    ~ItalianChef();
    std::string getName();
    void makePasta();
};
