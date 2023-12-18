#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    List L;
    address P;

    createList(L);
    int Pilihan = selectMenu();

    while (Pilihan != 0){
        switch (Pilihan){
        case 1:
            Pilihan1(L);
            break;
        case 2:
            Pilihan2(L);
            break;
        case 3:
            Pilihan3(L);
            break;
        case 4:
            Pilihan4(L);
            break;
        case 5:
            Pilihan = 0;
            break;
        default :
            cout << "INPUT TIDAK VALID" << endl;
        }
        Pilihan = selectMenu();
    }
    cout << "---- TERIMA KASIH ----" << endl;
    return 0;

}
