//Bela Citra_124140051_RD

#include <iostream> // library input-output
using namespace std; // supaya tidak perlu menulis std::

void jumlahGanjil(int y, int *x) { // prosedur dengan parameter batas y dan pointer hasil
    *x = 0; // inisialisasi hasil penjumlahan dengan 0
    for (int i = 1; i <= y; i++) { // loop dari 1 sampai y
        if (i % 2 != 0) { // cek apakah i ganjil
            *x += i; // jika ganjil, tambahkan ke hasil
        }
    }
}

int main() {
    int y, hasil; // variabel batas perhitungan dan hasil penjumlahan
    cout << "Masukkan batas bilangan (y): ";
    cin >> y; // input nilai y dari user

    jumlahGanjil(y, &hasil); // panggil prosedur dengan y dan alamat hasil

    cout << "Jumlah bilangan ganjil dari 1 sampai " << y << " = " << hasil << endl;

    return 0; // akhir program
}
