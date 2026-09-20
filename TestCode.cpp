#include <iostream>

using namespace std;

int main()
{
    // Dictionary: x, y adalah integer; p1, p2 adalah pointer ke integer
    int x, y;
    int *p1 = nullptr;
    int *p2 = nullptr;

    // Inisialisasi awal
    x = 5;
    y = 10;

    cout << "=== KONDISI AWAL ===" << endl;
    cout << "Nilai x = " << x << " (Alamat: " << &x << ")" << endl;
    cout << "Nilai y = " << y << " (Alamat: " << &y << ")" << endl;
    cout << "----------------------------------------\n"
         << endl;

    // --- LANGKAH 1 ---
    p1 = &y;
    p2 = &x;
    *p1 = *p2;

    cout << "=== SETELAH LANGKAH 1 ===" << endl;
    cout << "p1 menunjuk ke y, p2 menunjuk ke x" << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << " (berubah menjadi 5)" << endl;
    cout << "----------------------------------------\n"
         << endl;

    // --- LANGKAH 2 ---
    p2 = &x;
    *p2 = 7;
    p1 = p2;

    cout << "=== SETELAH LANGKAH 2 ===" << endl;
    cout << "p2 menunjuk ke x, *p2 diubah jadi 7, p1 disalin dari p2" << endl;
    cout << "Nilai x = " << x << " (berubah menjadi 7)" << endl;
    cout << "Nilai y = " << y << endl;
    cout << "----------------------------------------\n"
         << endl;

    // --- LANGKAH 3 ---
    p1 = &x;
    *p1 = y;

    cout << "=== SETELAH LANGKAH 3 ===" << endl;
    cout << "p1 menunjuk ke x, *p1 diisi dengan nilai y" << endl;
    cout << "Nilai x = " << x << " (berubah menjadi 5 kembali)" << endl;
    cout << "Nilai y = " << y << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}