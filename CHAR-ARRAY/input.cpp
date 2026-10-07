#include<iostream>
#include <cstring>
using namespace std;

int main(){
    // char word[10];// terminal se hum direct string bhi le sakte hai
    // cin >>word;  // ignore word after space 

    // cout<<"your word was "<<word<<endl;
    // cout<<strlen(word);

    // ignore word after space se bachne ke liye use cin.getline()

    char sentance[30];
    cin.getline(sentance, 30); // cin.getline(charARR name , size, delimiter or yani ish point ke baad sentance ko print nahi karana)

    cout<<"your word was "<<sentance<<endl;
    cout<<"your word was "<<sentance[3]<<endl;
    cout<<strlen(sentance);
    return 0;
}