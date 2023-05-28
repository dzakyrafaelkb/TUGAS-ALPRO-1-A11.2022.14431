#include <iostream>
using namespace std;

int pembagian(int a, int b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan 0 tidak dapat dilakukan." << endl;
        exit(1);
    } else if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int main() {
    int num1, num2;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "masukan angka kedua: ";
    cin >> num2;

    int hasil = pembagian(num1, num2);

    cout << "Hasil pembagian: " << hasil << endl;
    return 0;
}
