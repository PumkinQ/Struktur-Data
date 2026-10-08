#include <iostream>
#include "MobilList.h"

using namespace std;

int main()
{
    List daftarMobil;
    createList(daftarMobil);

    // 1. insertFirst & insertLast
    address m1 = alokasi("Toyota");
    insertFirst(daftarMobil, m1);

    address m2 = alokasi("Honda");
    insertLast(daftarMobil, m2);

    cout << "Kondisi awal (Toyota, Honda):" << endl;
    printInfo(daftarMobil);

    // 2. insertAfter: Sisipkan "Mazda" tepat setelah m1 (Toyota)
    address m3 = alokasi("Mazda");
    insertAfter(m3, m1);
    cout << "\nSetelah insertAfter ('Mazda' setelah 'Toyota'):" << endl;
    printInfo(daftarMobil);

    // 3. deleteAfter: Hapus elemen tepat setelah m1 (yaitu m3 / 'Mazda')
    address pDihapus = Nil;
    deleteAfter(pDihapus, m1);
    if (pDihapus != Nil)
    {
        cout << "\nMobil yang dihapus via deleteAfter: " << pDihapus->merek << endl;
        dealokasi(pDihapus);
    }
    cout << "Setelah deleteAfter:" << endl;
    printInfo(daftarMobil);

    // 4. deleteFirst
    deleteFirst(daftarMobil, pDihapus);
    if (pDihapus != Nil)
    {
        cout << "\nMobil yang dihapus via deleteFirst: " << pDihapus->merek << endl;
        dealokasi(pDihapus);
    }
    cout << "Setelah deleteFirst:" << endl;
    printInfo(daftarMobil);

    // 5. deleteLast
    deleteLast(daftarMobil, pDihapus);
    if (pDihapus != Nil)
    {
        cout << "\nMobil yang dihapus via deleteLast: " << pDihapus->merek << endl;
        dealokasi(pDihapus);
    }
    cout << "Setelah deleteLast:" << endl;
    printInfo(daftarMobil);

    return 0;
}