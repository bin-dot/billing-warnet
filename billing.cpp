/* Penghitungan Billing Warnet */
/* Sitti Aulia Sabina R*/
/* 20051397016 */
/* 2020B */

#include <iostream> //ini untuk tement-temen yang pakai cout dan cin
//#include <conio.h>
// #include <stdio.h> //ini untuk tement-temen yang pakai printf & scanf "%d %d", j1, j2

using namespace std;


int main(){

    int j1jam, j1menit, j1detik, j2jam, j2menit, j2detik, jumlahdetik, jumlahbayar, selisihjam, selisihmenit, selisihdetik;
    const int tarif = 5000;
    string pagar = "==========================================================";


    cout << pagar << endl;
    cout << "Selamat Datang di penghitungan billing warnet" << endl;
    cout << pagar << endl << endl;

    cout << "Memulai : " << endl;
    cout << "Masukkan jam mulai billing : "; cin >> j1jam;
    cout << "Masukkan menit mulai billing : "; cin >> j1menit;
    cout << "Masukkan detik mulai billing : "; cin >> j1detik;
    cout << endl;


    cout << pagar << endl;
    cout << "Mengakhiri : " << endl;
    cout << "Masukkan jam Mengakhiri billing : "; cin >> j2jam;
    cout << "Masukkan menit Mengakhiri billing : "; cin >> j2menit;
    cout << "Masukkan detik Mengakhiri billing : "; cin >> j2detik;
    cout << pagar << endl;

    selisihjam = j2jam - j1jam;
    selisihmenit = j2menit - j1menit;
    selisihdetik = j2detik - j1detik;

    jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
    jumlahbayar = (tarif / 3600) * jumlahdetik;


    cout << pagar << endl;
    cout << endl;
    cout << "Hasilnya : " << endl;
    cout << "lama pemakaian anda adalah " << selisihjam << " Jam, " << selisihmenit << " Menit, " << selisihdetik << " Detik" << endl;
    cout << "Jumlah Pembayaran billingnya sebanyak Rp. " << jumlahbayar << " ,-" << endl;
    cout << pagar << endl << endl;
    cout << "Terimakasih" << endl;

    return 0;
}
