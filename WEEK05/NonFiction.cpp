#include <iostream>
#include "Buku.cpp"
using namespace std;

class NonFiction : public Buku
{
private:
    int numOfPage;
public:
    int getNumOfPage();
	void setNumOfPage(int);
	void Display();
};

int NonFiction::getNumOfPage(){
    return numOfPage;
}

void NonFiction::setNumOfPage(int newNumOfPage){
    numOfPage = newNumOfPage;
}

void NonFiction::Display(){
    Buku::Display();
    cout << "Jumlah Halaman : " << getNumOfPage() << " halaman!!!" << endl;
}

int main(){
    NonFiction myBook;
    myBook.setJudul("GTA 6 Leak!!");
    myBook.setPengarang("Saya sendiri hehe...");
    myBook.setNumOfPage(100);
    myBook.Display();
}