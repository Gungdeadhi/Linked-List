#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;

typedef struct Perpustakaan infotype;
typedef struct ElmtList *address;

struct Perpustakaan{
    string JudulBuku, KodeBuku, NamaPengarang;
    int TahunTerbit, JmlBuku;
};

struct ElmtList {
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

void createList(List &L);
bool isEmpty(List L);
address createNewElmtList(infotype X);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address &P);
void insertLast(List &L, address P);
void deleteFirts(List &L, address P);
void deleteAfter(List &L, address &Prec, address &P);
void deleteLast(List &L, address P);
void concat(List &L1, List &L2, List &L3);
address findBuku(string Kode, List &L);
void RemoveBuku(string Kode, List &L);
void show(List L);
int selectMenu();
void Pilihan1(List &L);
void Pilihan2(List L);
void Pilihan3(List &L);
void Pilihan4(List &L);

#endif // DLL_H_INCLUDED
