#include <iostream>

using namespace std;

int main()
{
    int jum;
    cout << "masukan banyak baris/perulangan: ";
    cin >> jum;

    // Perulangan FOR
    cout << "\n--- For Loop ---" << endl;
    for (int i = 0; i < jum; i++)
    {
        cout << "saya pintar\n";
    }

    // Perulangan WHILE
    cout << "\n--- While Loop ---" << endl;
    int i = 1;
    while (i <= jum)
    {
        cout << "baris ke-" << i << endl;
        i++;
    }

    // Perulangan DO-WHILE
    cout << "\n--- Do-While Loop ---" << endl;
    int j = 0;
    if (jum > 0)
    {
        do
        {
            cout << "baris ke-" << (j + 1) << endl;
            j++;
        } while (j < jum);
    }

    return 0;
}