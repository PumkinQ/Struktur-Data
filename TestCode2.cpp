#include <iostream>

using namespace std;

int main()
{
     // Dictionary: a, b, c adalah integer; p1, p2, p3 adalah pointer ke integer
     int a, b, c;
     int *p1 = nullptr;
     int *p2 = nullptr;
     int *p3 = nullptr;

     cout << "=== KONDISI AWAL & BARIS 4-6 ===" << endl;
     // Baris 4, 5, 6
     a = 10;
     b = 15;
     c = 27;
     cout << "Baris 4-6 -> a = " << a << ", b = " << b << ", c = " << c << endl;
     cout << "----------------------------------------\n"
          << endl;

     // Baris 7: p1 <- &a
     p1 = &a;
     cout << "=== BARIS 7: p1 <- &a ===" << endl;
     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
     cout << "*p1 = " << *p1 << endl;
     cout << "----------------------------------------\n"
          << endl;

     // Baris 8: p2 <- &b
     p2 = &b;
     cout << "=== BARIS 8: p2 <- &b ===" << endl;
     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
     cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
     cout << "----------------------------------------\n"
          << endl;

     // Baris 9: *p1 <- c
     *p1 = c;
     cout << "=== BARIS 9: *p1 <- c ===" << endl;
     cout << "a = " << a << " (berubah jadi 27 karena *p1 menunjuk ke a)" << endl;
     cout << "b = " << b << ", c = " << c << endl;
     cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
     cout << "----------------------------------------\n"
          << endl;

     // Baris 10: a <- *p2
     a = *p2;
     cout << "=== BARIS 10: a <- *p2 ===" << endl;
     cout << "a = " << a << " (berubah jadi 15 mengambil nilai dari *p2 / b)" << endl;
     cout << "b = " << b << ", c = " << c << endl;
     cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
     cout << "----------------------------------------\n"
          << endl;

     // Baris 11: b <- 6, p3 <- &b, p3 <- &c, *p1 <- *p3
     b = 6;
     p3 = &b;
     p3 = &c;
     *p1 = *p3;
     cout << "=== BARIS 11 (AKHIR) ===" << endl;
     cout << "a = " << a << ", b = " << b << " (berubah jadi 6), c = " << c << endl;
     cout << "*p1 = " << *p1 << " (berubah jadi 27 mengikuti *p3)" << endl;
     cout << "*p2 = " << *p2 << " (berubah jadi 6 mengikuti b)" << endl;
     cout << "*p3 = " << *p3 << " (menunjuk ke c, yaitu 27)" << endl;
     cout << "----------------------------------------" << endl;

     return 0;
}