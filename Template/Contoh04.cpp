// class template
#include <iostream>
using namespace std;

template <class T>
class mypair
{
private:
    T a, b;
public:
    mypair(T first, T second){
        a = first;
        b = second;
    }
    T GetMax();
};

template <class T>
T mypair<T>::GetMax(){
    T retval;
    retval = (a > b) ? a : b;
    return (retval);
}

int main(int argc, char const *argv[])
{
    mypair<int> myobject(115, 36);
    cout << myobject.GetMax();
    return 0;
}

