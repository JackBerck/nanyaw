#include <iostream>
#include <string>

using namespace std;

struct jam
{
    int jam;
    int menit;
    int detik;
};

void penguranganJam(jam jam_1, jam jam_2)
{
    // pengurangan detik
    int sisaMenit, sisaJam, hasilDetik, hasilMenit, hasilJam;

    if (jam_1.detik < jam_2.detik)
    {
        hasilDetik = (jam_1.detik + 60) - jam_2.detik;
        sisaMenit = jam_1.menit - 1;
    }
    else
    {
        hasilDetik = jam_1.detik - jam_2.detik;
    }

    // pengurangan menit
    if (jam_1.menit < jam_2.menit)
    {
        hasilMenit = (sisaMenit + 60) - jam_2.menit;
        sisaJam = jam_1.jam - 1;
    }
    else
    {
        hasilMenit = sisaMenit - jam_2.menit;
    }

    // pengurangan jam
    hasilJam = sisaJam - jam_2.jam;

    cout << "Hasil pengurangan kedua jam: " << hasilJam << ":" << hasilMenit << ":" << hasilDetik;
}

int main()
{
    jam jam_1;
    jam jam_2;

    // jam 1
    jam_1.jam = 16;
    jam_1.menit = 45;
    jam_1.detik = 24;

    // jam 2
    jam_2.jam = 10;
    jam_2.menit = 50;
    jam_2.detik = 35;

    // pemanggilan fungsi
    penguranganJam(jam_1, jam_2);

    return 0;
}
