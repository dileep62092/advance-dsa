#include<iostream>
#include <cstring>
using namespace std;

int main(){
    //char work[] = "code";
   // char work[] = {'c', 'o', 'd', 'e', '\0'};
    //cout << strlen(work)<<endl; // length of string
    //cout << work;

   
    // char word[30];
    // cin >> word; // ignore word after whitespace

    // cout << "your word was :" << word << endl;
    // cout << strlen(word);


    char sentance[30];
    cin.getline(sentance , 30);

    cout << "your word was :" << sentance<< endl;
    cout << strlen(sentance)<<endl;
    cout << sentance[0];

    return 0;
}