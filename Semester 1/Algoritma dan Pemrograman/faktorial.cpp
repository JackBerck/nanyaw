#include <iostream>

using namespace std;
int main()
{

    int bilangan;
    cout << "Masukkan sebuah bilangan : ";
    cin >> bilangan;

    int faktorial = 1;

    for (int i = 1; i <= bilangan; ++i)
    {
        faktorial *= i;
    }

    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial;

    return 0;
}