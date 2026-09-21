#include <iostream>

using namespace std;

int main()
{
    int inp1;
    int m = 0;

    cout << "Masukan Angka: ";
    cin >> inp1;

    cout << "output: \n"
         << endl;

    for (int i = inp1 + 1; i > 0; i--)
    {

        for (int j = 0; j <= inp1 - i; j++)
        {
            cout << " " << " ";
        }
        for (int k = 0; k < (i); k++)
        {
            if ((inp1 - k) - m != 0)
            {
                cout << (inp1 - k) - m << " ";
            }
        }
        cout << "*";
        for (int k = (i); k > 0; k--)
        {
            if ((inp1 - k) + 1 - m != 0)

            {
                cout << " " << (inp1 - k) + 1 - m;
            }
        }
        m++;
        cout << endl;
        }
    cout << "Nama: I Komang Arjuna Tudung Negara" << endl;
    cout << "Nim: 109082530014" << endl;
    return 0;
}