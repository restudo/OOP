/*
    Create a function template named circleArea(). The function receives a
    parameterized argument representing the radius of a circle, and returns a double
    representing the circle’s area. (The area is computed as 3.14 multiplied by the radius
    squared.) Write a main() function that demonstrates that the function works correctly
    with either an integer or a double argument. Save the file as CircleArea.cpp
*/

#include <iostream>
using namespace std;

template <class T>
T CircleArea(T radius){
    T result;
    result = 3.14 * radius * radius;
    return result;
}

int main(int argc, char const *argv[])
{
    cout << "Circle area with radius 7cm = (int)" << CircleArea<int>(7) << endl;
    cout << "Circle area with radius 7cm = (double)" << CircleArea<double>(7) << endl;
    return 0;
}

