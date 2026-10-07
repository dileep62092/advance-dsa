#include<iostream>
using namespace std;

bool Search(int matrix[][4], int n, int m, int key){
    int i = 0, j=m-1;
    while(i < n && j >=0){
        int cell = matrix[i][j];
        if(cell == key){
            cout<<"key found: "<<"("<<i<<","<<j<<")";
            return true;
        }else if(cell>key){
            //left
            j--;
        }else{
            i++;
        }
    }
    cout<<"not found";
    return false;
}

int main(){
    int matrix[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    
    Search(matrix,4,4,19);
    return 0;
}