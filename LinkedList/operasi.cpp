#include "list.h"
#include "operasi.h"
#include <iostream>
using namespace std;


address sentinelSearch(List *L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM : Dedep


    //----------------------------------------

}

void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 1301140165
    int temp,ketemu,z;
    address p,q;
    temp=NULL;
        if((L.first==NULL)||(L.first)->next==NULL){
            return;
        }
        p=next(L.first);
        while(p!=NULL){
            z=p->info.id;
            ketemu=0;
            q=L.first;
            while(q!=p){
                if(q->info.id > p->info.id&&ketemu==0){
                    z=q->info.id;
                    q->info.id = p->info.id;
                    ketemu = 1;
                    q=q->next;
                }else{
                    if(ketemu==1){
                        temp=z;
                        z=q->info.id;
                        q->info.id=temp;
                    }
                    q=q->next;
                }
            }
            q->info.id=z;
            p=p->next;
        }
    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM :


    //----------------------------------------
}
