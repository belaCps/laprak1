//Bela Citra_124140051_RD

#include <iostream> // library input-output
using namespace std; // supaya tidak perlu tulis std:: berulang

// Prosedur untuk membalik array menggunakan pointer
void balikArray(int *ptr, int n) {
    for (int i = 0; i < n / 2; i++) {         // loop sampai setengah panjang array
        int temp = *(ptr + i);                // simpan elemen di depan sementara
        *(ptr + i) = *(ptr + (n - 1 - i));    // tukar dengan elemen dari belakang
        *(ptr + (n - 1 - i)) = temp;          // isi elemen belakang dengan nilai sementara
    }
}

int main() {
    int n; // variabel untuk ukuran array
    cout << "Masukkan jumlah elemen array: "; 
    cin >> n; // input ukuran array dari user

    int arr[n]; // deklarasi array dengan panjang n

    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); // input elemen array menggunakan pointer
    }

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; // tampilkan array asli
    }
    cout << endl;

    balikArray(arr, n); // panggil prosedur untuk membalik array

    cout << "Array sesudah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; // tampilkan array setelah dibalik
    }
    cout << endl;

    return 0; // akhir program
}
