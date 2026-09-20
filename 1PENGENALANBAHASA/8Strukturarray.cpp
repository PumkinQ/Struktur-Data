#include <iostream>
#define MAX 5

using namespace std;

struct data_mhs
{
    char nama[40];
    int nilai;
};

int main()
{
    data_mhs siswa[MAX];

    // Input data
    for (int i = 0; i < MAX; i++)
    {
        cout << "masukkan data ke-" << i + 1 << endl;
        cout << "nama = ";
        cin >> siswa[i].nama;
        cout << "nilai = ";
        cin >> siswa[i].nilai;
    }

    // Output data
    cout << "\ndata siswa\n";
    cout << "=======";
    for (int i = 0; i < MAX; i++)
    {
        cout << "\n\ndata ke-" << i + 1;
        cout << "\nnama  = " << siswa[i].nama;
        cout << "\nnilai = " << siswa[i].nilai;
    }
    cout << endl;

    return 0;
}