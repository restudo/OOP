/*
    Fungsi template dapat digunakan untuk menerima lebih dari satu parameter. Contoh
    berikut menggunakan dua tipe class yang berbeda
*/

// function template
#include <iostream>
using namespace std;

template <class T, class U>
T GetMin(T a, U b)
{
    return ((a > b) ? a : b);
};

int main(int argc, char const *argv[])
{
    int i, j = 6;
    long l = 10;

    i = GetMin<int, long>(j, l);

    cout << i << endl;
    return 0;
}