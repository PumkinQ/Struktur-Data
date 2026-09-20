#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan angka (0-100): ";
    cin >> n;

    string kata[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                     "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

    cout << n << " : ";

    if (n < 12)
    {
        cout << kata[n];
    }
    else if (n < 20)
    {
        cout << kata[n % 10] << " belas";
    }
    else if (n < 100)
    {
        cout << kata[n / 10] << " puluh";
        if (n % 10 != 0)
        {
            cout << " " << kata[n % 10];
        }
    }
    else if (n == 100)
    {
        cout << "seratus";
    }
    else
    {
        cout << "Angka di luar jangkauan (0-100)!";
    }

    cout << endl;
    cout << "Nama: I Komang Arjuna Tudung Negara" << endl;
    cout << "Nim: 109082530014" << endl;
    return 0;
}