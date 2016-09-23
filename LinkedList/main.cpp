#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
int pilihan;

int main()
{


    mainMenu();

    return 0;
}

void mainMenu(){
    /**
	* IS : List sudah dibuat
    * PR : memberikan output pilihan menu kepada user
    *       1. insert first
    *       2. insert after
    *       3. insert last
    *       4. delete first
    *       5. delete after
    *       6. delete last
    *       7. view list
    *       8. insertion sort
    *       9. search
    */
    //-------------your code here-------------
    address P;
    address Prec;
    List L;
    createList(L);
    infotype x;
    address y;
    cout<<"Selamat kepada Anda telah menggunakan aplikasi terbaru ini \n"; //merupakan
    cout<<"Program Linked List\n";
    cout<<"============================ \n";
    cout << "--------Menu Aplikasi-----" << endl;
    cout << "1. Insert first \n";
    cout << "2. Insert after  \n";
    cout << "3. Insert last  \n";
    cout << "4. Delete first  \n";
    cout << "5. Delete after  \n";
    cout << "6. Delete last  \n";
    cout << "7. View list  \n";
    cout << "8. Search Elemant \n";
    cout << "9. Sentinel Search  \n";
    cout << "10. Insertion sort  \n";
    cout << "11. Delete by ID \n";
    cout << "12. Exit \n\n";

    PilihMenu:
    cout << "Silahkan memilih menu yang tersedia \n";
    cout << "Menu ke : ";
    cin >> pilihan;
    cout << endl;
      switch(pilihan)
    {
    case 1 :
        createKaryawan(&x);
        P = alokasi(x);
        insertFirst(&L,P);
        goto PilihMenu;

    case 2 :
        createKaryawan(&x);
        P = alokasi(x);
        insertAfter(&L,P);
        goto PilihMenu;

    case 3 :
        createKaryawan(&x);
        P = alokasi(x);
        insertLast(&L,P);
        goto PilihMenu;

    case 4 :
        deleteFirst(&L,P);
        goto PilihMenu;

    case 5 :
        deleteAfter(&L,P);
        goto PilihMenu;

    case 6 :
        deleteLast(&L,P);
        goto PilihMenu;

    case 7 :
        printInfo(&L);
        goto PilihMenu;

    case 8 :
        cout << "Masukkan elemen yang ingin Anda cari : " << endl;
        cin >> x.id;
        findElm(L, x);
        cout << "Hasilnya ada di elemen " << P << endl;
        goto PilihMenu;

    case 9 :
        cout << "Masukkan id yang ingin Anda cari : ";
        cin >> x.id;
        y = sentinelSearch(&L,x);
        if (y != NULL){
            cout << "Ditemukan di : " << y << endl;
        }
        else
        {
            cout << "Tidak ditemukan" << endl;
        }
        goto PilihMenu;


    case 10 :
        insertionSort(&L);
        printInfo(&L);
        goto PilihMenu;

    case 11 :
        deletebyID(L, x) ;
        printInfo(&L);
        goto PilihMenu;

    case 12 :
        cout<<"Terimakasih telah menggunakan program ini"<<endl;
        cout<<"IF 39 06 / Kelompok 10"<<endl;
        cout<<"Muhammad Fadhlan Supriadi / 1301154202"<<endl;
        cout<<"Dhevi Larasati / 1301154454"<<endl;
        cout<<"Fajar Hadi Hidayatullah / 1301140165"<<endl;
        cout<<"Hardo Fernando Silalahi / 1301154216"<<endl;
        cout <<endl;
    //----------------------------------------
}
}

