//         ARRAYS -->> collection of same data type

//    output and input

#include<iostream>
using namespace std;
 //           array ko print kar rahe hai
/*int main(){
    int marks[5]= {1,2,3,4,5};
    //cout<<marks[0];
    int n = sizeof(marks)/sizeof(int);
    for(int i = 0; i < n; i++){
        cout<<marks[i]<<",";
    }
    return 0;
} */


 //     memory allocate at compile time ""statically"""

/* int main(){ // hamne input user se or terminal se liya 
    int arr[5];// at compile time
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<",";
    }
    return 0;
} */

// also allocate memory at runtime ""dynamically ""

int main(){
    int n;
    cout<<"enter your aarray length :";
    cin >>n;
    int arr[n];
    for(int  i = 0; i < n; i++){
        cin >>arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<",";
    }
    return 0;
}