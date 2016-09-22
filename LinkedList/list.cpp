#include "list.h"
#include <iostream>
using namespace std;

address createElement(stuff addstuff)
{
    address P;
    P = new elmlist;
    P->next = NULL;
    P->info.id = addstuff.id;
    P->info.nama = addstuff.nama;
    P->info.divisi = addstuff.divisi;
    P->info.jabatan = addstuff.jabatan;
    P->info.gaji = addstuff.gaji;
    return P;
}

void createKaryawan(stuff *addstuff)
{
    cout<<"Masukkan ID      : ";
    cin>>addstuff->id;
    cout<<"Masukkan Nama    : ";
    cin>>addstuff->nama;
    cout<<"Masukkan Divisi  : ";
    cin>>addstuff->divisi;
    cout<<"Masukkan Jabatan : ";
    cin>>addstuff->jabatan;
    cout<<"Masukkan Gaji    : ";
    cin>>addstuff->gaji;
    cout<<endl;
}

int countElement(List *L)
{
    int count = 1;
    address Q;
    Q = L->first;
    if (L->first==NULL)
    {
        return 0;
    }
    while (Q->next != NULL)
    {
        Q = Q->next;
        count++;
    }
    return count;
}

void createList(List &L)
{
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154202
    L.first = NULL;
    //----------------------------------------
}

address alokasi(infotype x)
{
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154202
    P = new elmlist;
    P->info = x;
    P->next = NULL;
    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154202
    delete P;
    //----------------------------------------
}

void insertFirst(List *L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : Dedep

    //----------------------------------------
}

void insertLast(List *L, address P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154202
    if(L->first == NULL)
        L->first = P;
    else
    {
        address Q;
        Q = L->first;
        while(next(Q) != NULL)
            Q = next(Q);
        P->next = NULL;
        Q->next = P;
    }
    //----------------------------------------
}

address findElm(List *L, infotype x)
{
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154202
    P = L->first;
    while ((info(P).id != x.id) && (next(P) != NULL))
    {
        P = next(P);
    }
    if ((next(P) == NULL) && (info(P).id != x.id))
    {
        return NULL;
    }
    else
    {
        return P;
    }
    //----------------------------------------
    return P;
}

void deleteFirst(List *L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : Hardo
    P = L->first;
    if ( P->next != NULL){
        L->first = P->next;
        dealokasi(P);
    }
    else{
        L->first = NULL;
        dealokasi(P);
    }
    //----------------------------------------
}

void deleteLast(List *L, address &P)
{
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : Hardo
    if (L->first != NULL){
        {
            P = L->first;
            if (P->next == NULL){
                L->first = NULL;
                delete P;
            }
            else{
                while (next(P->next) != NULL){
                    P = P->next;
                    P->next = NULL;
                }
            }
        }
    }


    //----------------------------------------
}

void printInfo(List *L)
{
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154202
    address P;
    P = L->first;
    int i = 1;
    //cout<<P->next;
    while (P != NULL)
    {
        cout<<"Karyawan ke-"<<i<<endl;
        i++;
        cout<<"ID      : "<<(P->info).id<<endl;
        cout<<"Nama    : "<<(P->info).nama<<endl;
        cout<<"Divisi  : "<<(P->info).divisi<<endl;
        cout<<"Jabatan : "<<(P->info).jabatan<<endl;
        cout<<"Gaji    : "<<(P->info).gaji<<endl;
        cout<<endl;
        P = P->next;
    }
    //----------------------------------------
}

void insertAfter(address *Prec, address P)
{
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 1301140165
    infotype x;
    address Q,L;
    P=new elmlist;
    Prec=(next(L->next));
    if(P->next=NULL)
    {
        (P->next)=Prec;
        (next(L->next))=P;
    }
    else
    {
        cout<<"insert gagal karena next(p) tidak NULL";
    }

    //----------------------------------------

}
void deleteAfter(address *Prec, address &P)
{
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : Hardo
    if (Prec->next != NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        dealokasi(P);
    }

    //----------------------------------------
}

