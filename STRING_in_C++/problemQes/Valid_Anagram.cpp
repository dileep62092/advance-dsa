#include<iostream>
#include<string>
using namespace std;


bool isValid_Anagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout<<"not a anagram";
        return false;
    }

    int count[26]= {0};
    for(int i = 0; i < str1.length(); i++){
        int idx = str1[i]-'a';
        count[idx]++;
    }
    // for(int i =0; i<26; i++){
    //     cout<<count[i]<<" ";
    // }
    // cout<<endl;

    for(int i = 0; i<str2.length(); i++){
        int idx  = str2[i]- 'a';
        if (count[idx]==0){
            return false;
        }
        count[idx]--;
    }
    // for(int i =0; i<26; i++){
    //     cout<<count[i]<<" ";
    // }
    // cout<<endl;

    cout<<"valid anagram";
    return true;
}
int main(){
    string str1 = "anagram"; 
    string str2 = "nagaram";

    isValid_Anagram(str1,str2);

   
    return 0;
}