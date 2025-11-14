#include "Student.h"

// Setterit
void Student::setName(std::string n)
{
    name = n;
}

void Student::setStudentNumber(int num)
{
    studentNumber = num;
}

void Student::setAverage(double avg)
{
    average = avg;
}

// Getterit
std::string Student::getName()
{
    return name;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

double Student::getAverage()
{
    return average;
}
