#include <iostream>
using namespace std;
// Euclid's Algorithm for finding
// the greatest common divisor (gcd)
int gcd(int u, int v);

class fraction
{
    // overload opertor insertion <<
    friend ostream &operator<<(ostream &, const fraction &);
    // overload opertor extraction >>
    friend istream &operator>>(istream &, fraction &);

private:
    int numerator;
    int denominator;

public:
    fraction(int n = 0, int d = 1);

    fraction operator+(fraction f2);
    fraction operator-(fraction f2);
    fraction operator*(fraction f2);
    fraction operator/(fraction f2);

    bool operator==(fraction f2);
    bool operator<(fraction f2);
    bool operator>(fraction f2);

    void Reduce();
};
