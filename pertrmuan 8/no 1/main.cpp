#include <iostream>

using namespace std;

void genap_ganjil(int arr[], int n){
    int min_even = -1;
    int min_odd = -1;
    int min_evenindex = -1;
    int min_oddindex = -1;

    for(int i = 0; i<n; i++){
        if(arr[i] % 2 != 0){
            if(min_odd == -1 || arr[i]< min_odd){
                min_odd = arr[i];
                min_oddindex = i;
            }
        }
        else{
            if(min_even == -1 || arr[i] < min_even){
                min_even = arr[i];
                min_evenindex = i;
            }
        }
    }
        cout << endl << "bilangan kecil ganjil : "<<min_odd<< " index ke : "<<min_oddindex<<")"<<endl;

        cout << endl << "bilangan kecil genap : "<<min_even<< " index ke : "<<min_evenindex<<")"<<endl;
}

int main()
{
    int arr[] = {6,7,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    genap_ganjil(arr, n);
    return 0;
}
