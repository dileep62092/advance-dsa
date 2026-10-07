#include<iostream>
using namespace std;

// int main(){
//     // int arr[100]= {1,2,3,4,5}    static memory allocation maine fixed kar liya memory size 100 baad me change nahi kar sakte

//     // ........... but in dynamic memory allocation.................
//     // first take size
//     int size;
//     cin>>size;

//     int *arr = new int(size); // new memory allocate
 
//     //  new memory  me number ko allocate kar rahe hai
//     int x =1;
//     for(int i = 0; i<size; i++){
//         arr[i] = x;
//         cout<<arr[i]<<",";
//         x++;
//     }
//     cout << endl;
//     return 0;
// }

// int main(){
//     int size;
//     cin >> size;
//     int *ptr = new int(size);   
//     return 0;
// }

void funint(){
    int *ptr  = new int;
    *ptr = 5;
    cout << *(ptr);

    delete ptr;
}
void fun(){
    int size;
    cin >> size;

    int *ptr = new int[size];
    int x = 1;
    for(int i = 0; i <size; i++){
        ptr[i] = x;
        cout << ptr[i]<< " ";
        x++;
    }

    delete [] ptr ;
}

int main(){
    fun();
    return 0;
}