#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout<<"enter your rows:";
    cin>>rows;
    cout<<"enter your cols";
    cin >>cols;

    int* *matrix = new int* [rows];  //heap memory create

    for(int i=0; i<rows; i++){
        matrix[i]= new int [cols];
    }

    // data store
     int x = 1;
    for(int i = 0; i <rows; i++){
        for(int j = 0; j <cols; j++){
            matrix[i][j] = x;
            cout<<matrix[i][j]<<" ";
            x++;
        }
        cout<<endl;
    }

    //  access

    cout<<matrix[2][2]<<endl; // 9
    cout<<*(*(matrix + 2) + 2); // 9

    return 0;
}