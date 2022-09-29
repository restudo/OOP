#include <iostream>
#include "Buku.cpp"
using namespace std;

class Fiction : public Buku
{
private:
    int readLvl;
public:
    void getReadLvl();
	void setReadLvl(int);
	void Display();
};

void Fiction::getReadLvl(){
    switch (readLvl)
    {
    case 1:
        cout << "(" << readLvl << ")" << " Buku ini Boring~~" << endl;
        break;
    case 2:
        cout << "(" << readLvl << ")" << " Buku yang menarik" << endl;
        break;
    case 3:
        cout << "(" << readLvl << ")" << " Buku ini Epic!!!" << endl;
        break;
    
    default:
        if(readLvl <=0 )
            cout << "(" << readLvl << ")" << " Buku ini sepertinya artifak.." << endl;
        else if(readLvl > 3)
            cout << "(" << readLvl << ")" << " Buku ini sangat rekomendasi untuk dibaca. Truly!!!" << endl;
        break;
    }
}

void Fiction::setReadLvl(int newReadLvl){
    
    readLvl = newReadLvl;
}

void Fiction::Display(){
    Buku::Display();
    cout << "Tingkat Membaca : ";
    getReadLvl();
}

int main(){
    Fiction myBook;
    myBook.setJudul("GTA 6 Leak!!");
    myBook.setPengarang("Saya sendiri hehe...");
    myBook.setReadLvl(1);
    myBook.Display();
}