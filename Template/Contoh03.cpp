/*
    Kita juga dapat membuat template kelas / class template, jadi kelas tersebut memiliki anggota yang
    menggunakan template parameter sebagai tipe
    
    JIka kita mengimplementasikan fungsi di luar kelas maka definisi fungsi harus
    didahului dengan prefix <…>.
*/

// class template
#include <iostream>
using namespace std;

template <class T>
class mypair
{
private:
    T values[2];

public:
    mypair(T first, T second){
        values[0] = first;
        values[1] = second;
    }
};

int main(int argc, char const *argv[])
{
    mypair<int> myobject(115, 36);
    mypair<double> myfloats(3.0, 2.18);
    return 0;
}

