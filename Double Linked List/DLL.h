#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
using namespace std;
typedef struct lagu infotype;
typedef struct elmtList *address;

struct lagu{
    string NamaBand, JudulLagu;
};

struct elmtList{
    infotype info;
    address prev;
    address next;
};

struct List{
    address first;
    address last;
};

void createList_1303220145(List &L);
bool isEmpty_1303220145(List L);
address createNewElmt_1303220145(infotype X);
void insertFirst_1303220145(List &L, address P);
void insertAfter_1303220145(List &L, address &prec, address &P);
void insertLast_1303220145(List &L, address P);
void deleteFirst_1303220145(List &L, address &P);
void deleteAfter_1303220145(List &L, address &prec, address &P);
void deleteLast_1303220145(List &L, address &P);
void concat_1303220145(List &L1,List &L2,List &L3);
address findLagu_1303220145(string Judul, List &L);
void removeLagu_1303220145(string Judul, List &L);
int selectMenu_1303220145();
void Pilihan1_1303220145(List &L);
void Pilihan2_1303220145(List &L);
void Pilihan3_1303220145(List L);
void Pilihan4_1303220145(List &L);
void Show_1303220145(List L);
#endif // DLL_H_INCLUDED
