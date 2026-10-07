// convert to upper case
#include<iostream>
#include<cstring>
using namespace std;


void toUpperCase(char word[], int n){
    for(int i = 0; i < n; i++){
        // char ch = word[i];
        if(word[i]>='A' && word[i]<='Z'){ // ch >='A && ch <='B'
            continue;
        }
        else{
            word[i]=word[i]-'a'+'A';  // word[i]=pos +'A',, POS= ch - 'a'
        }
    }
}
int main(){
    char word[]="ApPle";
    toUpperCase(word, strlen(word));
    cout<<word;
    return 0;
}