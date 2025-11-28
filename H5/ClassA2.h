#pragma once

#include "ClassB.h"
#include <string>

using namespace std;

class ClassA2
{
private:
    ClassB &refB;
public:
    ClassA2(ClassB&); // Annetaan argumenttina B-luokan olion osoite
    string getBinfo();
    void setBinfo(string);
};
