#include <iostream>

using namespace std;

int main()
{
    int x = 25;
    int *ptr = &x; // Pointer ptr menyimpan alamat memori dari x

    cout << "Nilai x                 : " << x << endl;
    cout << "Alamat memori x (&x)    : " << &x << endl;
    cout << "Nilai ptr (alamat x)    : " << ptr << endl;
    cout << "Nilai *ptr (dereference): " << *ptr << endl;

    // Mengubah nilai x melalui pointer
    *ptr = 50;
    cout << "\nSetelah *ptr diubah menjadi 50:" << endl;
    cout << "Nilai x sekarang        : " << x << endl;

    return 0;
}