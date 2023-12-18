#include <iostream>
#include "Agung.h"

using namespace std;

int main()
{
    List L;
    createList_1303220145(L);
    address p;
    int pilihan = selectMenu_130322145();
    while (pilihan != 0){
        switch(pilihan){
        case 1:
            pilihan1_1303220145(L);
            break;
        case 2:
            Pilihan2_130220145(L);
            break;
        case 3:
            Pilihan3_130220145(L);
            break;
        case 4:
            Pilihan4_130220145(L);
            break;
        }
        pilihan = selectMenu_130322145();
    }
    cout << "Terima Kasih" << endl;
    return 0;

}
