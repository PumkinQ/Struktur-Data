#include <iostream>
#include "singlylist.h"

using namespace std;

void createList(List &L)
{
    L.first = Nil;
}

address alokasi(infotype x)
{
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P)
{
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P)
{
    P->next = L.first;
    L.first = P;
}

void printInfo(List L)
{
    address P = L.first;
    if (P == Nil)
    {
        return;
    }
    while (P != Nil)
    {
        cout << "[" << P->info << "]";
        if (P->next != Nil)
        {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}