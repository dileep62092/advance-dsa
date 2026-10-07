//       PASSING ARGUMENTS
// METHOD 1  :   PASS BY VALUE -> when parameter is a copy of actual argument variable in memory

// #include<iostream>
// using namespace std;


// void changeA(int a){// yaha par ek copy jish,me a = 10 hai
//     a =20;// phir mane ush copy me a ki value ko 20 kar diya
//     cout<<a<<"\n"; // show 20
// }
// int main(){
//     int a =10;
//     changeA(a); // actual agrument
//     cout<<a<<"\n";// 10 hi show karega 20 shiow ishliye nahi karega 
//                   // function ka kam khatm honme par woh memory se hat jayega
//                   // waise bhi woh ek copy tha
//     return 0;
// }


// METHOD 2 :    PASS BY REFERENCE (pass by address) ->
                // ishme hum argument me address pass karte hai
//     1. from pointer

/* #include<iostream>
using namespace std;

void changeA(int *ptr){// yeh ek pointer variable hai jo variable ke address 
                       // ko store karta hai
    *ptr = 20; // humne deference operator ka use karke vale change kar liya
    cout<< *ptr <<"\n"; // 20 show karega
}
int main(){
    int a =10;
    changeA(&a);
    cout<<a <<"\n"; // show 20
    return 0;
} */ 

//     2. from refrence variable 
//       ** reference variable ko hamsa initialze karna hota hai

#include<iostream>
using namespace std;

//        normal

/* int main(){
    int a =10;
    int &b = a; // reference variable
    b = 20;
    cout<<b<<"\n"; // 20
    cout<<a<<"\n"; // 20
    return 0;
} */

 //      in function

 void changeA(int &b){ // also take &a,  same memory location ko indicate kar rah hai
    b= 20; // also take a =20
    cout<<b<<"\n"; // 20
 }
 int main(){
    int a =10;
    changeA(a);
    cout << a<<"\n"; // 20
    return 0;
 }