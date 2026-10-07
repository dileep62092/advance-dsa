#include<iostream>
#include<cstring>
using namespace std;


void reverseCharArray( char word[], int n){
    int st = 0, end = n-1;
    
    while(st < end){ // st <= end  bhi le sakte hai
        swap(word[st], word[end]);// swap(word[st++],word[end--]); use kar sakte hai
        st++;
        end--;
    }
}
int main(){
    char word[]="code";
    reverseCharArray(word, strlen(word));
    cout<<word;
    return 0;
}