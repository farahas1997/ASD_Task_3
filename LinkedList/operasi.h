#ifndef OPERASI_H_INCLUDED
#define OPERASI_H_INCLUDED

#include "list.h"
#include <iostream>
using namespace std;

address sentinelSearch(List *L, infotype x);
void insertionSort(List *L);
void deletebyID(List &L, infotype x);

#endif // OPERASI_H_INCLUDED
