#include<iostream>
#include<cstring>
using namespace std;

bool isValidPalindrome(char word[], int n){
    int st = 0, end = n-1;
    while(st < end){
        if(word[st] != word[end]){
            cout<<"not valid palindrome";
            return false;  // not valid palindrome
        }
        st++;
        end--;
    }
    
    cout<<"valid palindrome";
    return true;  // valid palindrome
}


int main(){
    char word[]= "racecar";
    isValidPalindrome(word, strlen(word));

    return 0;
}