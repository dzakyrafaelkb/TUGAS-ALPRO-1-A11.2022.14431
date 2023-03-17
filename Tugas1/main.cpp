#include <iostream>

using namespace std;

int penjumlahan(int a, int b){
    return a+b;
} //soal nomer 1 fungsi penjumlahan 2 bilangan
int pengurangan(int a, int b){
    return a-b;
} // soal nomer 2 fungsi pengurangan 2 bilangan
int totalnilarray(int buddy[], int x){
    int total=0;
    for(int i=1; i<=x; i++){
        total += buddy[i];
    }
    return total; //soal nomer 3 fungsi untuk mehitung jumlah nilai total sebuah array
}
float ratanilarray(int buddy[], int x){
    int total = totalnilarray(buddy, x);
    float rata = (float)total/x;
    return rata;
} // soal 4 fungsi menghitung rata rata dari sebuah array
int main()
{
    int bil1, bil2;

    cout<<"masukan bilangan 1 : ";
    cin>>bil1;

    cout<<"masukan bilangan 2 : ";
    cin>>bil2;

    int hasilpenjumlahan = penjumlahan(bil1, bil2);
    int hasilpengurangan = pengurangan(bil1, bil2);

    cout<<"hasil penjumlahan adalah : "<<hasilpenjumlahan<<endl;
    cout<<"hasil pengurangan adalah : "<<hasilpengurangan<<endl;

    int x;
    cout << "---------array--------" <<endl;
    cout << "mau berapa baris? ";
    cin >> x;
    int buddy[x];
        for(int i=1; i<=x; i++){
            cout << "masukan angka ke-"<<i<< " : ";
            cin >> buddy[i];
        }
        int total = totalnilarray(buddy, x);
        cout << "no 3.jumlah total : "<<total<<endl;
        float rata = ratanilarray(buddy,x);
            cout<< "no 4.rata-rata : "<<rata<<endl;
    return 0;

}

