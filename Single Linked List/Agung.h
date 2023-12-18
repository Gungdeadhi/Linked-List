#include <iostream>
#define first(L) L.first
#define next(p) p->next
#define info(p) p->info

using namespace std;
typedef char infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List{
    address first;
};
void createList_1303220145(List &L);
address newElmt_1303220145(infotype x);
void insertLast_1303220145(List &L, address p);
void showAllData_1303220145(List L);
float vocalPersentage_1303220145(List L);
void showLastK_1303220145(List L, int k);
int selectMenu_130322145();
void pilihan1_1303220145(List &L);
void Pilihan2_130220145(List &L);
void Pilihan3_130220145(List &L);
void Pilihan4_130220145(List &L);
