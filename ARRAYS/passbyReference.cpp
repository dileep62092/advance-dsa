#include<iostream>
using namespace std;

void printArr(int nums[], int n){
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<",";
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printArr(arr, n);
    return 0;
}

// void func(int arr[] ){
//     arr[0] = 1000;
// }
// void func2(int *ptr){
//     ptr[0]=1000;
// }
// int main(){
//      int arr[]= {1,2,3,4,5};
//      int n = sizeof(arr)/sizeof(int);
//      func2(arr);
//      cout<<arr[0];
// }