#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;
int pilihan;

int main()
{
    createList(L);

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

    cout << "Silahkan memilih menu yang tersedia \n";
    cout << "Menu ke : ";
    cin >> pilihan;
    cout << endl;
    while (pilihan <= 11){
      switch(pilihan)
    {
    case 1 :
        insertFirst(L,P);
        break;
    case 2 :
        insertAfter(Prec,P);
        break;
    case 3 :
        insertLast(L,P);
        break;
    case 4 :
        deleteFirst(L,P);
        break;
    case 5 :
        deleteAfter(Prec,P);
        break;
    case 6 :
        deleteLast(L,P);
        break;
    case 7 :
        printInfo(L);
        break;
    case 8 :
        insertionSort(L);
        break;
    case 9 :
        sentinelSearch(L,x);
        break;
    case 10 :
        cout<<"Terimakasih telah menggunakan program ini"<<endl;
        cout<<"IF 39 06 / Kelompok 10"<<endl;
        cout<<"Fajar Hadi Hidayatullah / 1301140165"<<endl;
        cout<<"Muhammad Fadhlan Supriadi / 1301154202"<<endl;
        cout<<"Dhevi Larasati / 1301154454"<<endl;
        cout<<"Hardo Fernando Silalahi / 1301154216"<<endl;
        cout <<endl;
        main();
    }
    //----------------------------------------
}
}

