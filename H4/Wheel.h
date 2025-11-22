#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel();
    Wheel(int s, const std::string& t);
    int getSize() const;
    void setSize(int s);
    std::string getType() const;
    void setType(const std::string& t);
};

#endif // WHEEL_H
