// in normal way me
// Array pointer acts likes a constant pointer
#include<iostream>
using namespace std;

/* int main(){
    int x = 10;
    int *ptr = &x;
     
    int y = 25;
    ptr = &y;
    cout<<*ptr<<"\n";  // 25 show kar raha hai
    return 0;
}
*/

// lekin yehi kaam array ke sath nahi hota
int main(){
    int arr[5];
    cout<<arr<<"\n"; // array as a pointer its show address of arr if
    
    int y = 25;
    //arr = &y; // yeh possible nahi hai
    return 0;
}