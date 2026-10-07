#include<iostream>
using namespace std;

int main(){
    //char ch ='a';
    // ish char ka ASCII value chahiye
    //cout<<(int)ch;

    // agar hame kisi charater ki postion chahite toh
    // jaise 'f' ki postion kya hai
    char ch='f';
    int pos = ch - 'a';
    cout<<pos; //5
    return 0;
}