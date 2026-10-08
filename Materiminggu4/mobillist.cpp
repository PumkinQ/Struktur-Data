#include <iostream>
#include "MobilList.h"

using namespace std;

void createList(List &L)
{
    L.first = Nil;
}

address alokasi(string merek)
{
    address P = new ElmMobil;
    P->merek = merek;
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

void insertLast(List &L, address P)
{
    if (L.first == Nil)
    {
        L.first = P;
    }
    else
    {
        address Q = L.first;
        while (Q->next != Nil)
        {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(address P, address Prec)
{
    if (Prec != Nil && P != Nil)
    {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteFirst(List &L, address &P)
{
    if (L.first != Nil)
    {
        P = L.first;
        L.first = L.first->next;
        P->next = Nil;
    }
    else
    {
        P = Nil;
    }
}

void deleteLast(List &L, address &P)
{
    if (L.first == Nil)
    {
        P = Nil;
    }
    else if (L.first->next == Nil)
    {
        P = L.first;
        L.first = Nil;
    }
    else
    {
        address Q = L.first;
        while (Q->next->next != Nil)
        {
            Q = Q->next;
        }
        P = Q->next;
        Q->next = Nil;
    }
}

void deleteAfter(address &P, address Prec)
{
    if (Prec != Nil && Prec->next != Nil)
    {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    }
    else
    {
        P = Nil;
    }
}

void printInfo(List L)
{
    address P = L.first;
    if (P == Nil)
    {
        cout << "[List Mobil Kosong]" << endl;
        return;
    }
    while (P != Nil)
    {
        cout << "[" << P->merek << "]";
        if (P->next != Nil)
        {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}