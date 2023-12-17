#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> bilangan;

    bilangan = {31, 23, 5, 10, 28, 0};
    int arrLength = sizeof(bilangan) / sizeof(bilangan[0]), totalGanjil = 0, totalGenap = 0;

    for (int i = 0; i < arrLength; i++)
    {
        (bilangan[i] % 2) ? totalGenap++ : totalGanjil++;
    }
  
    cout << "Bilangan ganjil berjumlah: " << totalGanjil << endl << "Bilangan genap berjumlah: " << totalGenap;

    return 0;
}
