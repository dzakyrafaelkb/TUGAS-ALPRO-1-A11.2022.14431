#include <iostream>

using namespace std;

void selectionSort(int arr[], int size){
    for(int i =0; i < size - 1; i++){
        int max_index = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] > arr[max_index]){
                max_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; i < size - i - 1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void cetakArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {6,9,8,2,11,23,2,2,1,5,1,7,4,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);
    cout << "hasil sorting selection : ";
    cetakArray(arr, size);

    bubbleSort(arr, size);
    cout << "hasil sorting bubble : ";
    cetakArray(arr, size);

    return 0;
}
