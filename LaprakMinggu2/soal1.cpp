#include <iostream>

using namespace std;

int main()
{
    int matrikA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matrikB[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 19}};

    cout << "Hasil dari Pertambahan MatrikA dan MatrikB: " << endl;

    for (int i = 0;
         i < 3;
         i++)
    {
        for (int j = 0;
             j < 3;
             j++)
        {
            cout << matrikA[i][j] + matrikB[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Hasil dari Pengurangan MatrikA dan MatrikB: " << endl;
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << matrikA[k][l] - matrikB[k][l] << " ";
        }
        cout << "" << endl;
    }

    cout << endl;

    cout << "Hasil dari Perkalian MatrikA dan MatrikB: " << endl;
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            int hasil = 0;
            for (int o = 0; o < 3; o++)
            {
                hasil += matrikA[m][o] * matrikB[o][n];
            }
            cout << "perkalian dari baris " << m << " dan kolom " << n << " = " << hasil << endl;
        }
    }
}
