#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    List L;
    createList_1303220145(L);
    address P;
    int Pilihan = selectMenu_1303220145();
    while(Pilihan != 0){
        switch(Pilihan){
        case 1:
            Pilihan1_1303220145(L);
            break;
        case 2:
            Pilihan2_1303220145(L);
            break;
        case 3:
            Pilihan3_1303220145(L);
            break;
        case 4:
            Pilihan4_1303220145(L);
            break;
        }
        Pilihan = selectMenu_1303220145();
    }
    cout << "---- TERIMA KASIH ----"<<endl;
    return 0;

}
