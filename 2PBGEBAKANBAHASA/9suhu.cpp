#include <iostream>

using namespace std;

// Deklarasi/Prototype fungsi
float ctof(float celcius);

int main()
{
    float celcius, fahrenheit;
    cout << "nilai celcius? ";
    cin >> celcius;

    fahrenheit = ctof(celcius);
    cout << celcius << " Celcius adalah " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}

// Definisi fungsi
float ctof(float celcius)
{
    return celcius * 1.8 + 32;
}