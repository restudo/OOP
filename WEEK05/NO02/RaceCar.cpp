#include <iostream>
#include <cstdlib>
#include "Car.h"
using namespace std;

class RaceCar : public Car
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

int main()
{
    srand((unsigned) time(NULL));
    const int miles = 500;
    RaceCar aRaceCar;
    RaceCar aRaceCar2;

    aRaceCar.turnIgnitionOn();
    aRaceCar.setCarNum(01);
    cout << "Track Distance = " << miles << " Miles " << endl;
    
    aRaceCar2.turnIgnitionOn();
    aRaceCar2.setCarNum(02);
    
    while(1){
        aRaceCar.setSpeed(rand() % 200);
        aRaceCar.sumOfMiles();
        aRaceCar.showCar();

        aRaceCar2.setSpeed(rand() % 200);
        aRaceCar2.sumOfMiles();
        aRaceCar2.showCar();

        if(aRaceCar.getMiles() > miles && aRaceCar2.getMiles() < miles){
            cout << "Vehicle with No." << aRaceCar.getCarNum() << " have won!!" << endl;
            break;
        }
        else if(aRaceCar2.getMiles() > miles && aRaceCar.getMiles() < miles){
            cout << "Vehicle with No." << aRaceCar2.getCarNum() << " have won!!" << endl;
            break;
        }
    }

    return 0;
}