#include <iostream>
#include "fraction.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    int num[10];
    char choice;
    fraction temp;

    // fraction title;
    // cin >> title;

    for (int i = 0; i < 10; i++)
    {
        num[i] = 1 + rand() % 5;
    }

    cout << "\t1.Addition (+)" << endl;
    cout << "\t2.Subtraction (-)" << endl;
    cout << "\t3.Multiplication (*)" << endl;
    cout << "\t4.Division (/) " << endl;
    cout << "\t5.Exit" << endl;
    cout << endl
         << "\tChoice?: ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        for (int i = 0; i < 5; i++)
        {
            cout << endl
                 << "No." << i + 1 << " : ";
            fraction fraction1(num[i], 10);
            cout << fraction1 << " + ";
            fraction fraction2(num[i + 5], 10);
            cout << fraction2 << " = ";
            temp = fraction1 + fraction2;
            temp.Reduce();
            cout << temp;
            if (fraction1 == fraction2)
                cout << " Cool Fraction01 and Fraction02 are the same!!!";
        }
        break;
    case '2':
        for (int i = 0; i < 5; i++)
        {
            cout << endl
                 << "No." << i + 1 << " : ";
            fraction fraction1(num[i], 10);
            cout << fraction1 << " - ";
            fraction fraction2(num[i + 5], 10);
            cout << fraction2 << " = ";
            if (fraction1 > fraction2)
            {
                temp = fraction1 - fraction2;
                temp.Reduce();
            }
            else if (fraction1 < fraction2)
            {
                cout << "Fraction01 < Fraction02 (Swapped) = ";
                temp = fraction2 - fraction1;
                temp.Reduce();
            }
            temp.Reduce();
            cout << temp;
            if (fraction1 == fraction2)
                cout << " Fraction01 and Fraction02 are the same, the result is 0!!!";
        }
        break;
    case '3':
        for (int i = 0; i < 5; i++)
        {
            cout << endl
                 << "No." << i + 1 << " : ";
            fraction fraction1(num[i], 10);
            cout << fraction1 << " * ";
            fraction fraction2(num[i + 5], 10);
            cout << fraction2 << " = ";
            temp = fraction1 * fraction2;
            temp.Reduce();
            cout << temp;
            if (fraction1 == fraction2)
                cout << " Cool Fraction01 and Fraction02 are the same!!!";
        }
        break;
    case '4':
        for (int i = 0; i < 5; i++)
        {
            cout << endl
                 << "No." << i + 1 << " : ";
            fraction fraction1(num[i], 10);
            cout << fraction1 << " / ";
            fraction fraction2(num[i + 5], 10);
            cout << fraction2 << " = ";
            temp = fraction1 / fraction2;
            temp.Reduce();
            cout << temp;
            if (fraction1 == fraction2)
                cout << " Fraction01 and Fraction02 are the same, the result is 1!!!";
        }
        break;
    case '5':
        cout << "Bye~~" << endl;
        break;
    default:
        cout << choice << "is Unrecognized Choice: " << endl
             << endl;
        break;
    }
    return 0;
}
