#include "list.h"
#include <iostream>
using namespace std;

void createKaryawan(infotype *x)
{
    cout<<"Masukkan ID      : ";
    cin>>x->id;
    cout<<"Masukkan Nama    : ";
    cin>>x->nama;
    cout<<"Masukkan Divisi  : ";
    cin>>x->divisi;
    cout<<"Masukkan Jabatan : ";
    cin>>x->jabatan;
    cout<<"Masukkan Gaji    : ";
    cin>>x->gaji;
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

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM : 1301154202 / Fadhlan
    L.first = NULL;
    //----------------------------------------
}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154202 / Fadhlan
    P = new elmlist;
    P->info = x;
	P->next = NULL;

	P->info.id = x.id;
    P->info.nama = x.nama;
    P->info.divisi = x.divisi;
    P->info.jabatan = x.jabatan;
    P->info.gaji = x.gaji;
    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 1301154454 / Dedep
    delete P;
    //----------------------------------------
}

void insertFirst(List *L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154454 / Dedep
     if (L->first == NULL)
        {
            L->first = P;
        }
        else
        {
            P->next = L->first;
            L->first = P;
        }
    //----------------------------------------
}

void insertLast(List *L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM : 1301154202 / Fadhlan
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

address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154454 / Dedep

    P = L.first;
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

void deleteFirst(List *L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154216 / Hardo
    P = L->first;
    if ( P != NULL){
        L->first = P->next;
        dealokasi(P);}
    else{
        cout << "List kosong" << endl;
    }

    //----------------------------------------
}

void deleteLast(List *L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154216 / Hardo
    if (L->first != NULL)
    {

        if (countElement(L) == 1)
            deleteFirst(L, P);
        else
        {
            address Prec;
            P = L->first;
            while (P->next != NULL)
            {
                Prec = P;
                P = P->next;
            }
            Prec->next = NULL;
            delete P;
        }
    }
    else
    {
        cout<<"List Kosong tidak Ada Elemen"<<endl;
    }

    //----------------------------------------
}

void printInfo(List *L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 1301154202 / Fadhlan
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


void insertAfter(List *L, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 1301140165 / Fajar
    /* infotype x;
 -        P=L.first->next;		 +    address Q,L;
 -        if(p->next=NULL){		 +    P=new elmlist;
 -            Prec->next=p;		 +    Prec=(next(L->next));
 -            L.first->next=Prec;		 +    if(P->next=NULL)
 -        }else{		 +    {
 -            cout<<"insert gagal karena next(p) tidak NULL";		 +        (P->next)=Prec;
 -        }		 +        (next(L->next))=P;
 +    }
 +    else
 +    {
 +        cout<<"insert gagal karena next(p) tidak NULL";
 +    }*/
    int totElm = countElement(L);
    int x;
    address Prec;
    if (L->first != NULL)
    {
        cout<<"Ada "<< totElm <<" Elemen \n";
        cout <<"Masukan posisi Elemen yang ingin Anda input : ";
        cin>>x;
        if (x > 0 && x <= totElm)
        {
            Prec = L->first ;
            for (int i=1; i<x-1; i++)
            {
                Prec = Prec->next;
            }
            P->next = Prec->next;
            Prec->next = P;
        }
    }
    else
    {
        insertFirst(L,P);
    }
    //----------------------------------------
}


void deleteAfter(List *L, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301140165 / Hardo
    /*if (Prec->next != NULL)
     {
         P = next(Prec);
         next(Prec) = next(P);
         dealokasi(P);
     }*/
    int totElm = countElement(L);
    int x;
    address Prec;
    if (L->first != NULL)
    {
        cout<<"Ada "<<totElm<<" Elemen \n";
        if (countElement(L) == 1)
        {
            cout << "Akan menghapus list pertama"<<endl;
            deleteFirst(L,P);
        }
        else
        {
            cout <<"Masukan posisi Elemen yang ingin Anda delete : ";
            cin>>x;
            cin.ignore();
        }
        if (x>0 && x<=totElm)
        {
            Prec = L->first;
            for (int i=1; i<x-1; i++)
            {
                Prec = Prec->next;
            }
            P = Prec->next;
            Prec->next = P->next;
            P->next = NULL;
            delete P;
        }
    }
    else
    {
        cout<<"Maaf, List kosong"<<endl;
    }
    //----------------------------------------
}

