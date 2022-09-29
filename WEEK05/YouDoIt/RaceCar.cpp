#include <iostream>
#include "class.h"
using namespace std;

int main()
{
    Car aCar;
    RaceCar aRaceCar;
    aCar.turnIgnitionOn();
    aCar.setSpeed(80);
    cout << "Car at 80 mph: ";
    aCar.showCar();
    aRaceCar.turnIgnitionOn();
    aRaceCar.setSpeed(80);
    cout << "Race car at 80 mph: ";
    aRaceCar.showCar();
    return 0;
}