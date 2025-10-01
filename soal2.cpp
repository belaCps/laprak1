//Bela Citra_124140051_RD

#include <iostream> // library input-output
using namespace std; // supaya tidak perlu menulis std:: setiap kali

// Prosedur untuk menghitung jumlah kuadrat (Σn^2) dan perkalian bilangan ganjil (∏(2n-1))
void operasiMatematika(int y, long long *x, long long *z) {
    *x = 0;   // inisialisasi *x dengan 0 untuk penjumlahan
    *z = 1;   // inisialisasi *z dengan 1 untuk perkalian

    for (int n = 1; n <= y; n++) {   // loop dari 1 sampai y
        *x += n * n;        // tambahkan kuadrat n ke *x
        *z *= (2 * n - 1);  // kalikan bilangan ganjil (2n-1) ke *z
    }
}

int main() {
    int y;                  // variabel untuk input batas perhitungan
    long long hasilX, hasilZ; // variabel hasil, tipe long long biar muat angka besar

    cout << "Masukkan nilai y: "; // minta input dari user
    cin >> y; // baca input user dan simpan ke variabel y

    // panggil prosedur, masukkan y serta alamat dari hasilX dan hasilZ
    operasiMatematika(y, &hasilX, &hasilZ);

    // tampilkan hasil perhitungan jumlah kuadrat
    cout << "Jumlah kuadrat dari 1 sampai " << y << " = " << hasilX << endl;

    // tampilkan hasil perhitungan perkalian bilangan ganjil
    cout << "Perkalian bilangan ganjil dari 1 sampai " << (2*y-1) 
         << " = " << hasilZ << endl;

    return 0; // akhir program
}
