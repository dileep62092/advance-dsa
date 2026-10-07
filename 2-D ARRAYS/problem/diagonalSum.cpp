#include<iostream>
using namespace std;
 // n^2
void diagonalSum(int matrix[][3], int n, int m){
    //int n = 4, m =4;
    int sum =0;
    for(int i=0; i< n; i++){
        for(int j = 0; j<m; j++){
              if (i==j){
                sum +=matrix[i][j];
              }else if (j == n-i-1){
                sum += matrix[i][j];
              }
        }
    }
    cout<<sum<<endl;
}
int main(){
    // int matrix1[4][4]={{1,2,3,4},
    //                 {5,6,7,8},
    //                 {9,10,11,12},
    //                  {13,14,15,16}};
    //diagonalSum(matrix1,4,4);
    int matrix2[3][3]={{1,2,3},
                    {5,6,7},
                    {9,10,11},
                     };
    diagonalSum(matrix2,3,3);
    return 0;
}
