#include <iostream>
#include <iomanip>

using namespace std;

void tampilArray2D(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPointer(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void tukarArray2DPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom)
{
    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3)
    {
        tukarPointer(&arr1[baris][kolom], &arr2[baris][kolom]);
    }
    else
    {
        cout << "Posisi indeks (baris, kolom) di luar jangkauan (0-2)!" << endl;
    }
}

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int val1 = 100, val2 = 200;
    int *ptr1 = &val1;
    int *ptr2 = &val2;

    cout << "================ KONDISI AWAL ================\n";
    cout << "Array A:\n";
    tampilArray2D(A);
    cout << "\nArray B:\n";
    tampilArray2D(B);

    cout << "\nPointer 1 (*ptr1): " << *ptr1 << endl;
    cout << "Pointer 2 (*ptr2): " << *ptr2 << endl;

    cout << "\n----------------------------------------------\n";
    cout << "Menukarkan nilai yang ditunjuk oleh ptr1 dan ptr2...\n";
    tukarPointer(ptr1, ptr2);
    cout << "Hasil -> *ptr1: " << *ptr1 << ", *ptr2: " << *ptr2 << endl;

    int baris = 1, kolom = 1;
    cout << "\n----------------------------------------------\n";
    cout << "Menukarkan elemen Array A dan B pada posisi [" << baris << "][" << kolom << "]...\n";
    tukarArray2DPosisi(A, B, baris, kolom);

    cout << "\nArray A setelah ditukar:\n";
    tampilArray2D(A);
    cout << "\nArray B setelah ditukar:\n";
    tampilArray2D(B);

    return 0;
}