#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int hp, double disp);
    int getHorsepower() const;
    void setHorsepower(int hp);
    double getDisplacement() const;
    void setDisplacement(double disp);
};

#endif // ENGINE_H
