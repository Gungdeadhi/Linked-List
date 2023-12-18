#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;
struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createList_1303220145(ListJadwal &L);
adr_jadwalP createElemenJadwal_1303220145(infotype x);
void insertLastK_1303220145(ListJadwal &L, adr_jadwalP P);
void showJadwal_1303220145(ListJadwal L);
void deletefirstJ_1303220145(ListJadwal &J, adr_jadwalP &P);
adr_jadwalP searchJ_1303220145(ListJadwal &L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
