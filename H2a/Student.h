#pragma once

#include <string>

class Student
{
private:
    std::string name;
    int studentNumber;
    double average;

public:
    // Setterit
    void setName(std::string n);
    void setStudentNumber(int num);
    void setAverage(double avg);

    // Getterit
    std::string getName();
    int getStudentNumber();
    double getAverage();
};

//kommentteja hiottu
