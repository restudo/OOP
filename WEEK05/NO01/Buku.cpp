#include <iostream>
#include <string>
using namespace std;

class Buku
{
private:
    string judul;
    string pengarang;
public:
    string getJudul();
	void setJudul(string);
    string getPengarang();
	void setPengarang(string);
	void Display();
};

void Buku::setJudul(string newJudul)
{
    judul = newJudul;
}

string Buku::getJudul(){
    return judul;
}

void Buku::setPengarang(string newPengarang)
{
    pengarang = newPengarang;
}

string Buku::getPengarang(){
    return pengarang;
}

void Buku::Display(){
	cout << "Judul      : " << getJudul() << endl;
	cout << "Pengarang  : " << getPengarang() << endl;
}

// int main(){
//     Buku myBook;
//     myBook.setJudul("GTA 6 Leak!!");
//     myBook.setPengarang("Saya sendiri hehe...");
//     myBook.Display();
// }