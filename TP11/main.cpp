#include <iostream>
#include "Flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    adr_jadwalP p;
    infotype dataP;
    int n;
    createList_1303220145(L);
    cout << "Jumlah List : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Masukan Kode Pesawat : " << endl;
        cin >> dataP.Kode;
        cout << "Masukan Jenis Pesawat : " << endl;
        cin >> dataP.Jenis;
        cout << "Masukan Tanggal Berangkat : " << endl;
        cin >> dataP.Tanggal;
        cout << "Masukan waktu Berangkat : " << endl;
        cin >> dataP.Waktu;
        cout << "Masukan Asal Pesawat : " << endl;
        cin >> dataP.Asal;
        cout << "Masukan Tujuan Pesawat : " << endl;
        cin >> dataP.Asal;
        cout << "Masukan Kapasitas Pesawat : " << endl;
        cin >> dataP.Kapasitas;

        p = createElemenJadwal_1303220145(dataP);
        insertLastK_1303220145(L, p);
    }
    cout << "Jadwal Pesawat : " << endl;
    showJadwal_1303220145(L);

    cout << "\n Hapus Jadwal Pesawat Pertama : " << endl;
    deletefirstJ_1303220145(L, p);
    showJadwal_1303220145(L);

    cout << "\n Cari Penerbangan : \n" << endl;
    cout << "Asal : " << endl;
    cin >> dataP.Asal;
    cout << "Tujuan : " << endl;
    cin >> dataP.Tujuan;
    cout << "Tanggal : " << endl;
    cin >> dataP.Tanggal;
    p = searchJ_1303220145(L, dataP.Asal, dataP.Tujuan, dataP.Tanggal);

    cout << "Asal : " << info(p).Asal << "Jenis : " << info(p).Jenis << "Kapasitas : " << info(p).Kapasitas << "Kode : " << info(p).Kode << "Tanggal : "  << info(p).Tanggal << "Tujuan : " << info(p).Tujuan << "Waktu : " << info(p).Waktu << endl;
}
