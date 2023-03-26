#include <iostream>
using namespace std;

// fungsi untuk mencari nilai maksimum
int max(int a, int b) {
    return (a > b) ? a : b;
}
// fungsi untuk mencari nilai minimum
int min(int a, int b) {
    return (a < b) ? a : b;
}
// Fungsi untuk mencari bilangan maksimum dalam array
int maxArray(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
// Fungsi untuk mencari bilangan minimum dalam array
int minArray(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
bool isFactor(int num, int factor) {
    if (num % factor == 0) {
        return true;
    }
    return false;
}
int searchArray(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; // kembalikan -1 jika target tidak ditemukan dalam array
}
bool isFound(int arrY[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arrY[i] == num) {
            return true;
        }
    }
    return false;
}
int sumEven(int arr[], int x) {
    int sum = 0;
    for (int i = 0; i < x; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int sum_odd(int arryyy[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arryyy[i] % 2 != 0) {
            sum += arryyy[i];
        }
    }
    return sum;
}



int main() {
    int a, b;

    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;

    // mencari nilai maksimum dan minimum menggunakan fungsi
    int max_value = max(a, b);
    int min_value = min(a, b);

    // menampilkan hasil maksimum dan minimum
    cout << "Nilai maksimum: " << max_value << endl;
    cout << "Nilai minimum: " << min_value << endl;

    int arr[5] = {4, 6, 2, 8, 1};
    int n = 5;

    //menampilkan bilangan maksimum dan minimum dalam array
    cout << "Bilangan maksimum dalam array adalah: " << maxArray(arr, n) << endl;
    cout << "Bilangan minimum dalam array adalah: " << minArray(arr, n) << endl;

    int num;

    cout << "Masukkan sebuah bilangan: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " adalah bilangan genap" << endl;
    } else {
        cout << num << " adalah bilangan ganjil" << endl;
    }

    int factor;

    cout << "Masukkan bilangan: ";
    cin >> num;

    cout << "Masukkan faktor yang ingin diperiksa: ";
    cin >> factor;

    if (isFactor(num, factor)) {
        cout << factor << " adalah faktor dari " << num << endl;
    } else {
        cout << factor << " bukan faktor dari " << num << endl;
    }

    const int size = 5;
    int array[size] = {3, 4, 5, 6, 7};
    int target, index;

    cout << "Masukkan bilangan yang ingin dicari: ";
    cin >> target;

    index = searchArray(array, size, target);

    if(index == -1) {
        cout << "Bilangan tidak ditemukan dalam array." << endl;
    } else {
        cout << "Bilangan ditemukan pada indeks ke-" << index << endl;
    }


    int arrY[size] = {3, 4, 5, 6, 7};

    cout << "Masukkan bilangan yang ingin dicari: ";
    cin >> num;

    if (isFound(arrY, size, num)) {
        cout << "Bilangan " << num << " ditemukan dalam array." << endl;
    } else {
        cout << "Bilangan " << num << " tidak ditemukan dalam array." << endl;
    }
    int nn;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> nn;

    int arryy[nn];
    cout << "Masukkan " << nn << " bilangan bulat: ";
    for (int i = 0; i < nn; i++) {
        cin >> arryy[i];
    }

    int x;
    cout << "Masukkan jumlah elemen array: ";
    cin >> x;
    cout << "Masukkan " << x<< " elemen array: ";
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    cout << "Jumlah bilangan genap pada array: " << sumEven(arr, x)<<endl;

    int arryyy[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = sum_odd(arryyy, size);
    cout << "Jumlah bilangan ganjil dalam array adalah " << sum << endl;

    return 0;
}
