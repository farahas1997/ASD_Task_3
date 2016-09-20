#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
char pilihan;

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
    stuff datastuff;
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
    cout << "8. Insertion sort  \n";
    cout << "9. Search \n";
    cout << "10. Exit \n\n";

    MenuLabel:
    cout << "Silahkan memilih menu yang tersedia \n";
    cout << "Menu ke : ";
    cin >> pilihan;
    cout << endl;
      switch(pilihan)
    {
    case '1' :
        createKaryawan(&datastuff);
        P = createElement(datastuff);
        insertFirst(&L,P);
        goto MenuLabel;

    case '2' :
        createKaryawan(&datastuff);
        P = createElement(datastuff);
        insertAfter(&Prec,P);
        goto MenuLabel;

    case '3' :
        createKaryawan(&datastuff);
        P = createElement(datastuff);
        insertLast(&L,P);
        goto MenuLabel;

    case '4' :
        deleteFirst(&L,P);
        goto MenuLabel;

    case '5' :
        deleteAfter(&Prec,P);
        goto MenuLabel;

    case '6' :
        deleteLast(&L,P);
        goto MenuLabel;

    case '7' :
        printInfo(&L);
        goto MenuLabel;

    case '8' :
        insertionSort(&L);
        goto MenuLabel;

    case '9' :
        sentinelSearch(&L,x);
        goto MenuLabel;

    case '10' :
        cout<<"Terimakasih telah menggunakan program ini"<<endl;
        cout<<"IF 39 06 / Kelompok 10"<<endl;
        cout<<"Fajar Hadi Hidayatullah / 1301140165"<<endl;
        cout<<"Muhammad Fadhlan Supriadi / 1301154202"<<endl;
        cout<<"Dhevi Larasati / 1301154454"<<endl;
        cout<<"Hardo Fernando Silalahi / 1301154216"<<endl;
        cout <<endl;
    //----------------------------------------
}
}

