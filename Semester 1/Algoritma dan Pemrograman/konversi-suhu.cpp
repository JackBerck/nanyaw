#include <iostream>

using namespace std;

int main() {
    
    float suhu_celsius;
    cout << "Masukkan suhu dalam Celsius: ";
    cin >> suhu_celsius;


    float suhu_fahrenheit = (suhu_celsius * 9/5) + 32;
    
    
    cout << "Suhu dalam Fahrenheit: " << suhu_fahrenheit;

    return 0;
}