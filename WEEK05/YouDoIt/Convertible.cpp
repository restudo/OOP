#include <iostream>
#include "class.h"
using namespace std;

int main()
{
    Convertible myCar;
    myCar.turnIgnitionOn();
    myCar.setSpeed(35);
    myCar.putTopDown();
    myCar.showCar();
    myCar.setSpeed(70);
    myCar.showCar();
    myCar.putTopUp();
    myCar.turnIgnitionOff();
    myCar.showCar();
    return 0;
}