#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float jari_jari;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    float luas = M_PI * pow(jari_jari, 2);
    float keliling = 2 * M_PI * jari_jari;

    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl;

    return 0;
}