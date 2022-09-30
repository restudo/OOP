#include <iostream>
#include "fraction.h"
using namespace std;

// Euclid's Algorithm for finding
// the greatest common divisor (gcd)
int gcd(int u, int v);

fraction::fraction(int n, int d)
{
    this->numerator = n;
    this->denominator = d;
    if (denominator == 0)
        this->denominator = 1;
    // Reduce();
}

fraction fraction::operator+(fraction f2)
{
    int n = numerator * f2.denominator + f2.numerator * denominator;
    int d = denominator * f2.denominator;

    return fraction(n, d);
}

fraction fraction::operator-(fraction f2)
{
    int n = numerator * f2.denominator - f2.numerator * denominator;
    int d = denominator * f2.denominator;

    return fraction(n, d);
}

fraction fraction::operator*(fraction f2)
{
    int n = numerator * f2.numerator;
    int d = denominator * f2.denominator;

    return fraction(n, d);
}

fraction fraction::operator/(fraction f2)
{
    int n = numerator * f2.denominator;
    int d = denominator * f2.numerator;

    return fraction(n, d);
}

bool fraction::operator==(fraction f2)
{
    return numerator == f2.numerator;
}

bool fraction::operator<(fraction f2)
{
    return numerator < f2.numerator;
}

bool fraction::operator>(fraction f2)
{
    return numerator > f2.numerator;
}

void fraction::Reduce()
{
    for (int i = denominator * numerator; i > 1; i--)
    {
        if ((denominator % i == 0) && (numerator % i == 0))
        {
            denominator /= i;
            numerator /= i;
        }
    }
}

ostream &operator<<(ostream &out, const fraction &result)
{
    out << result.numerator << "/" << result.denominator;
    return out;
}

// istream &operator>>(istream &input, fraction &choice)
// {
//     input >> choice;
//     return input;
// }

int gcd(int u, int v)
{

    if (v == 0)
        return u;

    return gcd(v, u % v);
}