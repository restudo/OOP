/*
    Complete the following tasks:

    a.  Create a calcDistance()function template that accepts two parameters
        representing two distances from a given point. The function returns the total distance
        as an integer.

    b.  Create a City class with fields for the city name and for the distance from Chicago,
        the hub city for Amalgamated Airlines. Overload the + operator to sum the distances
        to produce a City result in which the city name contains the two operand city names
        (for example, “New York to Los Angeles”) and the distance contains the total
        distance.

    c.  Create a Planet class with fields for the planet name and distance from Earth, the
        hub planet for the new Amalgamated Galactic Travel Corporation. Overload the +
        operator to sum the distances to produce a Planet result in which the planet name
        contains the two operand planet names (for example, “Venus to Mars”) and the
        distance contains the total distance.

    d.  Write a main()function that declares several integer, double, and City and
        Planet objects, and uses the calcDistance()function to compute the distance
        for several pairs. Save the file as Distance.cpp. 
*/

#include <iostream>
#include <string>
using namespace std;

// function template
template <class T>
T calcDistance(T a, T b)
{
    return a + b;
}

template <class T>
class City
{
private:
    string cityName;
    T distance;

public:
    City(const char *cityName, T distance)
    {
        cout << "City Name is " << cityName;
        cout << " with distance about " << distance << endl;

        this->cityName = cityName;
        this->distance = distance;
    }

    T operator+(const City &obj)
    {
        cout << "==========================================" << endl
             << "Total distance " << cityName << " to " << obj.cityName << " is = ";

        return calcDistance<T>(distance, obj.distance);
    }
};

template <class T>
class Planet
{
private:
    string planetName;
    T distance;

public:
    Planet(const char *planetName, T distance)
    {
        cout << "Planet Name is " << planetName;
        cout << " with distance about " << distance << endl;

        this->planetName = planetName;
        this->distance = distance;
    }

    T operator+(const Planet &obj)
    {
        cout << "==========================================" << endl
             << "Total distance " << planetName << " to " << obj.planetName << " is = ";

        return calcDistance<T>(distance, obj.distance);
    }
};

int main(int argc, char const *argv[])
{
    City<int> city1("Sidoarjo", 20);
    City<int> city2("Surabaya", 50);
    cout << city1 + city2;

    cout << endl
         << endl;

    Planet<double> planet1("Make-make", 17.91720);
    Planet<double> planet2("Ceres", 30.12);
    cout << planet1 + planet2;

    return 0;
}
