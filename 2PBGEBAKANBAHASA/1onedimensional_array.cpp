#include <iostream>

using namespace std;

int main()
{
    // Inisialisasi array 1 dimensi
    int nilai[5] = {70, 80, 75, 90, 85};

    cout << "Menampilkan elemen array satu dimensi:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "nilai[" << i << "] = " << nilai[i] << endl;
    }

    return 0;
}