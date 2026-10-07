#include<iostream>
#include<vector>
using namespace std;

// int main(){
//    // vector<int> vec1;
//     //cout << vec1.size(); //   0

//     vector<int> vec1(10, -1);
//     // access 

//     for(int i = 0; i < vec1.size(); i++){
//         cout <<  vec1[i]<< " ";
//     }
//     cout << endl;
//     return 0;
// }

//__________interviews__________

int main(){
    vector<int> vec = {1,2,3,4};
    cout << "size : " << vec.size()<< endl; // 4
    cout << " capacity :" << vec.capacity() << endl;  // 4
    
    // ek new element add karna hai

    vec.push_back(5);

    cout << "size : " << vec.size()<< endl; // 5
    cout << " capacity :" << vec.capacity() << endl; // 8

    // remove

    vec.pop_back();

    cout << "size : " << vec.size()<< endl;  // 4
    cout << " capacity :" << vec.capacity() << endl; // 8

    return 0 ;

}