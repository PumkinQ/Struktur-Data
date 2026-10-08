#include <iostream>

using namespace std;

int main()
{
    // Inisialisasi matriks/array 2 dimensi (ordo 2x3)
    int matriks[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << "Menampilkan elemen matriks 2x3:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}