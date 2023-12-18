#include <iostream>
#include "DLL.h"

using namespace std;

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

bool isEmpty(List L){
    if (first(L) == NULL && last(L) == NULL){
        return true;
    }else {
        return false;
    }
}

address createNewElmtList(infotype X){
    address P = new ElmtList;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List &L, address P){
    if (isEmpty(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertAfter(List &L, address &Prec, address &P){
    if (isEmpty(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }
}

void insertLast(List &L, address P){
    if (isEmpty(L)){
        first(L) = P;
        last(L) = P;
    }else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteFirts(List &L, address P){
    if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else {
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    }
}

void deleteAfter(List &L, address &Prec, address &P){
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    prev(P) = NULL;
    next(P) = NULL;
}

void deleteLast(List &L, address P){
    if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else {
        P = last(L);
        last(L) = prev(last(L));
        prev(P) = NULL;
        next(P) = NULL;

        delete P;
    }
}

void concat(List &L1, List &L2, List &L3){
    first(L3) = first(L1);
    last(L3) = last(L2);
    next(last(L1)) = prev(first(L2));
}

address findBuku(string Kode, List &L){
    address P = first(L);

    while (P != NULL){
        if (info(P).KodeBuku == Kode){
            return P;
        }
        P = next(P);
    }
}

void RemoveBuku(string Kode, List &L){
    address P = findBuku(Kode, L);
    address Prec = prev(P);

    if (prev(P) == NULL && next(P) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    }else if (prev(P) == NULL && next(P) != NULL){
        deleteFirts(L, P);
    }else if (prev(P) != NULL && next(P) == NULL){
        deleteLast(L,P);
    }else {
        deleteAfter(L, Prec, P);
    }
}

void show(List L){
    address P = first(L);

    while (P != NULL){
        cout << "JUDUL BUKU     : " << info(P).JudulBuku << endl;
        cout << "KODE BUKU      : " << info(P).KodeBuku << endl;
        cout << "PENGARANG      : " << info(P).NamaPengarang << endl;
        cout << "TAHUN TERBIT   : " << info(P).TahunTerbit << endl;
        cout << "JUMLAH BUKU    : " << info(P).JmlBuku << endl;

        P = next(P);
    }
}

int selectMenu(){
    cout << "----------------------------------" << endl;
    cout << "|--------- MENU PILIHAN ---------|" << endl;
    cout << "----------------------------------" << endl;
    cout << "|1. Tambah Daftar Buku Baru      |" << endl;
    cout << "|2. Cari Kode Buku Tertentu      |" << endl;
    cout << "|3. Hapus Buku Tertentu          |" << endl;
    cout << "|4. Tampilkan Semua Daftar Buku  |" << endl;
    cout << "|5. Keluar                       |" << endl;
    cout << "|--------------------------------|" << endl;
    cout << "                                  " << endl;
    cout << "------------------------------" << endl;
    cout << "|| |PILIHAN| [1][2][3][4][5]||" << endl;
    cout << "------------------------------" << endl;

    int input = 0;
    cout << "PILIHAN : ";
    cin >> input;

    return input;
}

void Pilihan1(List &L){
    int N;
    infotype info;
    cout << "Masukan Jumlah Buku Yang Akan Di Tambahkan : ";
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "JUDUL BUKU     : ";
        cin >> info.JudulBuku;
        cout << "KODE BUKU      : ";
        cin >> info.KodeBuku;
        cout << "PENGARANG      : ";
        cin >> info.NamaPengarang;
        cout << "TAHUN TERBIT   : ";
        cin >> info.TahunTerbit;
        cout << "JUMLAH BUKU    : ";
        cin >> info.JmlBuku;

        address P = createNewElmtList(info);
        insertLast(L,P);
    }
}

void Pilihan2(List L){
    string Kode;
    address P;

    cout << "Masukan Kode Buku Yang Dicari : ";
    cin >> Kode;

    P = findBuku(Kode, L);
    cout << "JUDUL BUKU     : " << info(P).JudulBuku << endl;
    cout << "KODE BUKU      : " << info(P).KodeBuku << endl;
    cout << "PENGARANG      : " << info(P).NamaPengarang << endl;
    cout << "TAHUN TERBIT   : " << info(P).TahunTerbit << endl;
    cout << "JUMLAH BUKU    : " << info(P).JmlBuku << endl;
}

void Pilihan3(List &L){
    string Kode;
    address P;

    cout << "Masukan Kode Buku Yang Akan Dihapus : ";
    cin >> Kode;
    RemoveBuku(Kode, L);
}

void Pilihan4(List &L){
   show(L);
}


