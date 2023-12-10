#include <iostream>

using namespace std;

int main()
{

    int panjang, lebar;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    int luas = panjang * lebar;

    cout << "Luas persegi panjang: " << luas;

    return 0;
}