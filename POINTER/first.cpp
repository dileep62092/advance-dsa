
//********* POINTER*************** */


// //adress of operator is denoted by & 
// #include<iostream>
// using namespace std;

// int main(){
//     // int a =10;
//     // //cout<<&a<<"\n";// &a yeh variable a ka address batata hai
//     // // pointer

//     // int *ptr=&a;
//     // int **pptr = &ptr;
//     // cout<<pptr<<"="<<&ptr<<"\n";
//     // cout<<&a<<"="<<ptr<<"\n";


//     //   dereference operator *(address)-> value(direct access through address)
//    // also modify the value of variable
//     int a = 10;
//     cout<<&a<<"\n";
//     cout<< *(&a)<<"\n"; // gives 10 value

//     // if make a ppointer
//     int *ptr = &a;
//     cout<<*(ptr)<<"\n"; // also give 10 value 

//     // also modify the value of variable

//     *ptr = 20;
//     cout<<a<<"\n"; // a ki value become 20 ho jayega
//     return 0;
// }

//          NULL POINTER    

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    cout<<a<<"="<<b;
    // int *ptr;
    // cout<<ptr<<"\n";// random garbase address show karta hai but if

    // int *ptr = NULL;
    // cout<<ptr<<"\n";// 0 show karega matlab ptr ke under koi address nahi hai
    // //deference of null pointer is not valid

    // cout<<*ptr<<"\n";// show segmentation fault
    return 0;
}