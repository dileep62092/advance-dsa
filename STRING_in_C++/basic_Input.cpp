#include<iostream>
#include<string>
using namespace std;


// .................Basic ..................about string
// int main(){
//     string str1 = "apple";
//     cout<<str1<<endl;
//     // we can update str1 value like at runtime
//     str1="orange";
//     cout<<str1;
//     return 0;
// }

// .............................input from the user..................

#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string str;
//     getline(cin, str);
//     cout<<str;
//     return 0;
// }


// .............access each character from the string

// int main(){
//     string str = "dileep kumar";
//     // ...........method -- 01---
//     // for(int i = 0; i < str.length(); i++){
//     //     cout<<str[i]<<" ";
//     // }

//     // ..............method -- 02--- for each loop

//     for(char ch : str){
//         cout << ch << " , ";
//     }
//     cout << endl;
//     return 0;
// }
// int main(){
//     string str;
//     getline(cin, str);

//     // for(int i = 0; i < str.length(); i++){
//     //     cout << str[i]<<" ";
//     // }
    
//     for(char ch : str){
//         cout << ch << " ";
//     }
//     return 0;
// }
// ____________ string in c++ (member function)___________

int main(){
    string str1 = "I love coding in c++ & java. I dont't like python";
    cout << str1.length() << endl;
    cout << str1[3] <<endl;
    cout << str1.at(3) << endl;
    cout<<str1.substr(1,5)<<endl;
    cout <<str1.find("c++");
    return 0;
}