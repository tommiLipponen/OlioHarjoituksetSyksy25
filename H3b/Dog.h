#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
    void callOut() override;
    ~Dog() override;
};
