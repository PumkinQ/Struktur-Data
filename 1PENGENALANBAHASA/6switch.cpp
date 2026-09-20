#include <iostream>

using namespace std;

int main()
{
    int kode_hari;
    cout << "Menentukan hari kerja/libur\n";
    cout << "1 = Senin   3 = Rabu   5 = Jumat   7 = Minggu\n";
    cout << "2 = Selasa  4 = Kamis  6 = Sabtu\n";
    cout << "Masukkan kode hari: ";
    cin >> kode_hari;

    switch (kode_hari)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Hari Kerja" << endl;
        break;
    case 6:
    case 7:
        cout << "Hari Libur" << endl;
        break;
    default:
        cout << "Kode masukan salah!!!" << endl;
        break;
    }
    return 0;
}