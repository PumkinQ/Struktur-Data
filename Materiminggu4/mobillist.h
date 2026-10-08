#ifndef MOBILLIST_H_INCLUDED
#define MOBILLIST_H_INCLUDED

#include <string>

using namespace std;

#define Nil NULL

struct ElmMobil
{
    string merek;
    ElmMobil *next;
};

typedef ElmMobil *address;

struct List
{
    address first;
};

// Primitif ADT Mobil
void createList(List &L);
address alokasi(string merek);
void dealokasi(address &P);
void printInfo(List L);

// Operasi Insert
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(address P, address Prec);

// Operasi Delete
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(address &P, address Prec);

#endif // MOBILLIST_H_INCLUDED