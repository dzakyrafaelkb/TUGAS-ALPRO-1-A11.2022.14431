#include <iostream>
using namespace std;

int tambah(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return tambah(a + 1, b - 1);
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "masukan angka kedua: ";
    cin>> num2;

    int hasil = tambah(num1, num2);

    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
