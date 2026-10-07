#include<bits/stdc++.h>
using namespace std;

// *****  PAIR--------------

void explainPair(){
    //pair<int, int> p = {1,3};
    //pair<int,pair<int,int>>p ={1,{3,4}};
    //cout<<p.first<<", "<<p.second.second<<","<<p.second.first;

    pair<int, int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

// *************  VECTOR-------------------
void explainVector(){
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[1];
   

    // vector<pair<int,int>>vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);
    // cout<<vec[0].first;

    //vector<int> v(5,100);
   // vector<int> v(5);

//    vector<int> v1(5,20);
//    vector<int>v2(v1);
//   cout<<v1[0]<<"= "<<v2[1];

// vector<int> v;
// v.push_back(10);
// v.push_back(20);
// v.push_back(30);
// v.emplace_back(40);
//vector<int>::iterator it = v.begin();
// //it++;
// it+3;
// cout<<*it<<"";

// vector<int>::iterator it = v.end();
// cout<<v.back();
// it--;
// cout<<"="<<*it;;

// for(auto it=v.begin(); it !=v.end(); it++){ // auto = vector<int>::iterator
//     cout<<*it<<",";
// }

// for(auto it : v){    // delete
//     cout<<it<<" ";
// }
// v.erase(v.begin()+1);
// for(auto it : v){
//     cout<<it<<" "<<"\n";
// }


// v.erase(v.begin()+1,v.begin()+2);
// for(auto it : v){
//     cout<<it<<" ";
// }

// insert function
vector<int> v(2,100);

v.insert(v.begin(),300);
//v.insert(v.begin()+1,300);//100,300,100
for(auto it : v){
    cout<<it<<" ";
}

// vector<int> copy(2,50);
// v.insert(v.begin(), copy.begin(), copy.end());
// // for(auto it : v){
// //     cout<<it<<" ";
    
// // }

// //cout<<v.size();
// v.pop_back();
// for(auto it : v){
//     cout<<it<<" ";
// }

// vector<int>v1;
// v1.push_back(2);
// v1.push_back(3);
// // for(auto it : v1){
// //     cout<<it<<" ";
// // }
// cout<<endl;

// vector<int>v2;
// v2.push_back(4);
// v2.push_back(5);
// // for(auto it : v2){
// //     cout<<it<<" ";
// // }
// v1.swap(v2);
// for(auto it : v1){
//     cout<<it<<" ";
// }


// v1.swap(v2);
// for(auto it : v1){
//     cout<<it<<" ";
// }


}



int main(){
    //explainPair();
    explainVector();
    return 0;
}