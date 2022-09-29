#include <iostream>
using namespace std;

class Car
{
protected:
    bool isIgnitionOn;
    int speed;
    int carNum;
    int carMiles;

public:
    void turnIgnitionOn();
    void turnIgnitionOff();
    void setSpeed(int);
    void showCar();

    void setCarNum(int);
    int getCarNum();
    void sumOfMiles();
    int getMiles();
};

void Car::setCarNum(int newCarNum){
    carNum = newCarNum;
}

int Car::getCarNum(){
    return carNum;
}

void Car::sumOfMiles(){
    carMiles += speed;
}

int Car::getMiles(){
    return carMiles;
}

void Car::showCar()
{
    cout << "No.Vehicle ";
    if(carNum <= 0)
        cout << "didn't recognized ";
    else
        cout << carNum << " ";

    if (isIgnitionOn)
        cout << "Ignition is on. ";
    else
        cout << "Ignition is off. ";
    cout << "Speed is " << speed << "Mph.";
    cout << " Mileage : " << getMiles() << "miles" << endl;

}

void Car::turnIgnitionOn()
{
    isIgnitionOn = true;
    carMiles = 0;
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