#include<iostream>
using namespace std;

  //         if given unsorted array

// void bubbleSort(int arr[], int n){
//     for(int i=0; i < n; i++){ // also take i<n-1
//         for(int j = 0; j< n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<",";
//     }
// }
// int main(){
//     int arr[]= {5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);
//     bubbleSort(arr, n);

// }

// sorted array ishme koi swap hi nahi hua

 void printArr(int *arr, int n){
        for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0; i < n; i++){ // also take i<n-1
        bool isSwap = false;
        for(int j = 0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // already array sorted hai
            return;
        }
    }

    printArr(arr, n);
}
int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);

}