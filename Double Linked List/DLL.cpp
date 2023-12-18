#include <iostream>
#include "DLL.h"

using namespace std;

void createList_1303220145(List &L){
  first(L) = NULL;
  last(L) = NULL;
}

bool isEmpty_1303220145(List L){
   if (first(L) == NULL && last(L) == NULL){
        return true;
   } else {
        return false;
   }
}

address createNewElmt_1303220145(infotype X){
    address P = new elmtList;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_1303220145(List &L, address P){
    if(isEmpty_1303220145(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAfter_1303220145(List &L, address &prec, address &P){
    if (!isEmpty_1303220145(L)){
        next(P) = next(prec);
        prev(P) = prec;
        prev(next(prec)) = P;
        next(prec) = P;
    }else {
        first(L) = P;
        last(L) = P;
    }
}
void insertLast_1303220145(List &L, address P){
    if (isEmpty_1303220145(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}
void deleteFirst_1303220145(List &L, address &P){
    if(first(L) != last(L)){
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    }else {
        first(L) = NULL;
        last(L) = NULL;
    }
    delete P;
}
void deleteAfter_1303220145(List &L, address &prec, address &P){
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    prev(P) = NULL;
    next(P) = NULL;

    delete P;
}
void deleteLast_1303220145(List &L, address &P){
    P = last(L);
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
}
void concat_1303220145(List &L1,List &L2,List &L3){
    first(L3) = first(L1);
    last(L3) = last(L2);
    next(last(L1)) = prev(first(L2));
}
address findLagu_1303220145(string Judul, List &L){
    address P = first(L);
    while(P != NULL){
        if (info(P).JudulLagu == Judul){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
void removeLagu_1303220145(string Judul, List &L){
    address P = findLagu_1303220145(Judul, L);
    address prec = prev(P);
    if (prev(P) == NULL && next(P) == NULL){
        first(L) = NULL;
        last(L) = NULL;
        delete P;
    }else if (prev(P) == NULL && next(P) != NULL){
        deleteFirst_1303220145(L,P);
    }else if (prev(P) != NULL && next(P) == NULL) {
        deleteLast_1303220145(L,P);
    }else {
        deleteAfter_1303220145(L, prec, P);
    }
}
void Show_1303220145(List L){
    address Q = first(L);
    while (Q != NULL){
        cout << "Nama Band  : " << info(Q).NamaBand << endl;
        cout << "Judul Lagu : " << info(Q).JudulLagu << endl;
        Q = next(Q);
    }
}
int selectMenu_1303220145(){
    cout << "----- MENU -----" << endl;
    cout << "1. Menambahkan N Data Lagu Baru" << endl;
    cout << "2. Menampilkan Semua Data" << endl;
    cout << "3. Mencari Judul Lagu Tertentu" << endl;
    cout << "4. Menghapus Judul Lagu" << endl;

    int input = 0;
    cin >> input;

    return input;
}
void Pilihan1_1303220145(List &L){
    int N;
    infotype info;
    cout << "Masukan Jumlah Lagu Yang Akan di Input : ";
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Input NamaBand : ";
        cin >> info.NamaBand;
        cout << "Input Judul Lagu : ";
        cin >> info.JudulLagu;
        address P = createNewElmt_1303220145(info);
        insertLast_1303220145(L,P);
    }
}
void Pilihan2_1303220145(List &L){
    Show_1303220145(L);
}
void Pilihan3_1303220145(List L){
    string Judul;
    address P;
    cout << "Masukan Judul Lagu Yang Dicari : ";
    cin >> Judul;
    P = findLagu_1303220145(Judul, L);
    cout << "Nama Band  : " << info(P).NamaBand << endl;
    cout << "Judul Lagu : " << info(P).JudulLagu << endl;
}
void Pilihan4_1303220145(List &L){
    string Judul;
    address P;
    cout << "Masukan Judul Lagu Yang Akan Dihapus : ";
    cin >> Judul;
    removeLagu_1303220145(Judul, L);
}
