#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m){
    int srow = 0, scol=0, ecol=m-1, erow=n-1;

    while(srow<=erow && scol <=ecol){
            // top 
        for(int i=scol; i<=ecol; i++){
            cout<<matrix[srow][i]<<",";
        }

    // right
         for(int j = srow+1 ; j<=erow; j++){
            cout<<matrix[j][ecol]<<",";
        }

    // bottom
        for(int i = ecol-1; i >=scol; i--){
            if(srow==erow){//middle
                break;
            }
            cout<<matrix[erow][i]<<",";
        }
    // left
        for(int j = erow-1; j>=srow+1; j--){
            if(scol== ecol){  // middle
                               //ishliye use hua right wala print kara liya hai toh left se print nahi karana hai
                break;
            }
           cout<<matrix[j][scol]<<",";
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
    
}
int main(){
    int matrix[4][4]={{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};
    spiralMatrix(matrix, 4, 4);
    /*int matrix[4][4]={{1,2,3,4},  // 3 x 4
                       {5,6,7,8},   // odd matrix ke liye hi iff wala condition use hua hau break kiya gaya hai taki dublicate print na ho
                       {9,10,11,12}};
    spiralMatrix2(matrix, 3, 4);*/
    return 0;
}