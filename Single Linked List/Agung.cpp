#include <iostream>
#include "Agung.h"
using namespace std;

void createList_1303220145(List &L){
    first(L) = NULL;
};

address newElmt(infotype x){
    address p=new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
};

void insertLast_1303220145(List &L, address p){
    address q = first(L);
    if (first(L) != NULL){
        while(next(q) != NULL){
            q = next(q);
        }
        next(q) = p;
    }else {
        first(L) = p;
    }
};

void showAllData_1303220145(List L){

    address p = first(L);
    while (p != NULL){
        cout << info(p) << endl;
        p = next(p);
    }
};
float vocalPersentage_1303220145(List L){
    address p = first(L);
    int vokal, nVokal;
     while (p != NULL){
       if (info(p) == 'a' || 'i' || 'u' || 'e' || 'o'){
                ++vokal;
            }else {
                ++nVokal;
            }
        p = next(p);
    }
    return vokal / nVokal * 100;
};
void showLastK_1303220145(List L, int k){
    address p = first(L);
    int i = L::size();
    for (int i = 0; i <= (i-k + 1); i++){
        p = next(p);
    }
    cout << p << endl;

};

int selectMenu_130322145(){
    cout << "___ MENU ___" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan persentase huruf vokal" << endl;
    cout << "4. Menampilkan karakter data k terakhir" << endl;
    cout << "0. Exit "<< endl;

    int input = 0;
    cin >> input;

    return input;
};

void pilihan1_1303220145(List &L){
    int N;
    infotype Data;
    cout << "Jumlah data yang akan di input : ";
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Input Data : ";
        cin >> Data;
        address p = newElmt_1303220145(Data);
        insertLast_1303220145(L,P);
    }
};

void Pilihan2_130220145(List &L){
   showAllData_1303220145(L);
};

void Pilihan3_130220145(List &L){
  cout << vocalPersentage_1303220145 << endl;
};

void Pilihan4_130220145(List &L){
  int k;
  cin >> k;
  showLastK_1303220145(L,k);
};

