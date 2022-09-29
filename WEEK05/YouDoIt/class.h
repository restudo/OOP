#include <iostream>
using namespace std;

// class car
class Car
{
protected:
    bool isIgnitionOn;
    int speed;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();
};
void Car::showCar()
{
    if (isIgnitionOn)
        cout << "Ignition is on. ";
    else
        cout << "Ignition is off. ";
    cout << "Speed is " << speed << endl;
}
void Car::turnIgnitionOn()
{
    isIgnitionOn = true;
}
void Car::turnIgnitionOff()
{
    speed = 0;
    isIgnitionOn = false;
}
void Car::setSpeed(int mph)
{
    const int STD_LIMIT = 65;
    if (isIgnitionOn)
        if (mph <= STD_LIMIT)
            speed = mph;
        else
            speed = STD_LIMIT;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

// class race car
class RaceCar : virtual public Car
{
public:
    void setSpeed(int mph);
};
void RaceCar::setSpeed(int mph)
{
    const int MAX_SPEED = 200;
    if (isIgnitionOn)
        if (mph <= MAX_SPEED)
            speed = mph;
        else
            speed = MAX_SPEED;
    else
        cout << "Can't set speed - ignition is off!" << endl;
}

// class convertible
class Convertible : virtual public Car
{
private:
    bool isTopUp;

public:
    void putTopUp();
    void putTopDown();
    void showCar();
};

void Convertible::putTopUp()
{
    isTopUp = true;
}
void Convertible::putTopDown()
{
    isTopUp = false;
}

void Convertible::showCar()
{
    Car::showCar();
    if (isTopUp)
        cout << "Top is up." << endl;
    else
        cout << "Top is down." << endl;
}

// class convertible race car
class ConvertibleRaceCar : public Convertible, public RaceCar
{

};
