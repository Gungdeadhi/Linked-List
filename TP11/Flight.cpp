#include <iostream>
#include "Flight.h"

using namespace std;

void createList_1303220145(ListJadwal &L){
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_1303220145(infotype x){
    adr_jadwalP P = new elemenJadwal;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertLastK_1303220145(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP q;

    if (first(L) == NULL){
        first(L) = P;
    }else {
        q = first(L);
        while (next(q) != NULL){
            q = next(q);
        }
        next(q) = P;
    }
}

void showJadwal_1303220145(ListJadwal L){
    adr_jadwalP P = first(L);
    while (P != NULL){
        cout << "Asal : " << info(P).Asal << endl;
        cout << "Jenis : " << info(P).Jenis << endl;
        cout << "Kapasitas : " << info(P).Kapasitas << endl;
        cout << "Kode : " << info(P).Kode << endl;
        cout << "Tanggal : " << info(P).Kapasitas << endl;
        cout << "Tujuan : " << info(P).Tujuan << endl;
        cout << "Waktu : " << info(P).Waktu << endl;

        P = next(P);
    }
}

void deletefirstJ_1303220145(ListJadwal &J, adr_jadwalP &P){
    if (first(J) == NULL){
        cout << "List Kosong" << endl;
    }else {
        P = first(J);
        first(J) = next(P);
        next(P) = NULL;
    }
}

adr_jadwalP searchJ_1303220145(ListJadwal &L, string dari, string ke, string tanggal){
    adr_jadwalP P = first(L);

    while (P != NULL){
        if (info(P).Asal == dari && info(P).Tujuan == ke && info(P).Tanggal == tanggal){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
