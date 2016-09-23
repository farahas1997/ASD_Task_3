#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

#define nil NULL
#define first(L) L->first
#define next(P) P->next
#define info(P) P->info

using namespace std;


/**
* Type stuff <
*   ID 	  : integer
*   ..... : .....
*   ..... : .....
* >
*
* Type infotype : stuff
* Type address  : pointer to ElmList
*
* Type ElmList <
*	info : infotype
*	next : address
* >
*
* Type List : < First : address >
*
**/


struct stuff{
	int id;
    //------------- your code here -----------
    string nama;
    string divisi;
    string jabatan;
    double gaji;
    //----------------------------------------
};

typedef stuff infotype;
typedef struct elmlist *address;

struct elmlist{
    //------------- your code here -----------
    stuff info;
    address next;
    //----------------------------------------
};

struct List{
    //------------- your code here -----------
    address first;
    //----------------------------------------
};

void createKaryawan(infotype *x);
int countElement(List *L);
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List *L, address P);
void insertLast(List *L, address P);
address findElm(List L, infotype x);
void deleteFirst(List *L, address &P);
void deleteLast(List *L, address &P);
void printInfo(List *L);
void insertAfter(List *L, address P);
void deleteAfter(List *L, address &P);


#endif // LIST_H_INCLUDED
