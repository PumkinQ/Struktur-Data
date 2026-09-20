#include <iostream>

using namespace std;

int main()
{
    double total, diskon;

    cout << "total pembelian: Rp.";
    cin >> total;

    if (total; >= 100000)
    {
        diskon = 0.05 * total;
    }
    else
    {
        diskon = 0;
    }

    cout << "besar diskon = Rp." << diskon << endl;
    return 0;
}