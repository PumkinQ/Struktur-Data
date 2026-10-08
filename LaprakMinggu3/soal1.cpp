#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas)
{
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}
int main()
{
    int n;
    Mahasiswa mhs[10];

    cout << "Masukkan jumlah mahasiswaw (maksimal 10): ";
    cin >> n;

    if (n > 10 || n <= 0)
    {
        cout << "Jumlah mahasiswa harus antara 1 sampai 10." << endl;
        return 1;
    }

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Input Data Mahasiswa ke-" << (i + 1) << " ---" << endl;

        cout << "Nama        : ";
        getline(cin, mhs[i].nama);

        cout << "NIM         : ";
        getline(cin, mhs[i].nim);

        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;

        cin.ignore();

        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n===========================================================================\n";
    cout << left
         << setw(15) << "NIM"
         << setw(20) << "Nama"
         << setw(10) << "UTS"
         << setw(10) << "UAS"
         << setw(10) << "Tugas"
         << setw(12) << "Nilai Akhir" << endl;
    cout << "===========================================================================\n";

    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(15) << mhs[i].nim
             << setw(20) << mhs[i].nama
             << setw(10) << mhs[i].uts
             << setw(10) << mhs[i].uas
             << setw(10) << mhs[i].tugas
             << fixed << setprecision(2) << setw(12) << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}