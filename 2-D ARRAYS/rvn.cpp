#include<bits/stdc++.h>
using namespace std;
        //______________________________________2-D arryas + Sorting concepts_______________________
        
//__________spiral matrix ________________problem

void spiral(int matrix[][4], int n , int m){
    int srow = 0, scol = 0;
    int erow = n-1, ecol = m - 1;

    while(srow <= erow && scol <= ecol){
        // top 
        for(int j = scol; j <= ecol ; j++){
            cout << matrix[srow][j] << " ";
        }

        // right 

        for(int i = srow+1; i <= erow; i++){
            cout << matrix[i][ecol]<<" ";
        }

        // bootom 

        for(int j = ecol - 1; j >=scol; j--){
            if(srow == erow){
                break;
            }
            cout << matrix[erow][j] << " ";
        }

        // left 

        for(int i = erow-1; i >= srow+1; i--){
            if(scol == ecol){
                break;
            }
            cout << matrix[i][scol]<<" ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

// _____diagonal(sum)__________problem

int  diagonalsum(int mat[][4], int n, int m){
    int sum  = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (i == j){
                sum += mat[i][j];
            }else if(j == n - i - 1){
                sum += mat[i][j];
            }

        }
    }

    //cout << sum;
    return sum;
}

//_________search in sorted matrix________problem

bool Searchkey(int mat[][4], int n, int m, int key){
    int i = 0, j = m-1;

    while(i < n && j >= 0){
        if(mat[i][j]==key){
            return true;
        }else if (mat[i][j]> key){
            // left
            j--;
        }else{
            i++;
        }
    }

    return false;
}
// int main(){
//     //int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     //int matrix2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int matrix[4][4] = {{10,20,30,40},{15,25,35,45}, {27, 29, 37, 48},{32,33,30,50}};
//     int n = 4, m = 4;

//     //spiral(matrix, n, m);
//     //spiral(matrix2 , n , m);

//    // cout << diagonalsum(matrix, n , m);

//    cout << Searchkey(matrix, n, m , 33);
//     return 0;
// }

//________________sorting_______________

// ___________________bubble sort______________
void printarr(int arr[], int n){
    for(int i = 0; i <n; i++){
        cout<< arr[i]<<" ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    printarr(arr , n);
}

// ___________selection sort_______________
void selectionSort(int arr[], int n){
    for(int i =0 ; i < n -1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
        }

      
    }

    printarr(arr, n);

}
// _____________insertion sort__________

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }

    printarr(arr, n);
}


// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);
//     //bubbleSort(arr , n);
//     // selectionSort(arr, n);

//     insertionSort(arr, n);

//     return 0;
// }

//______counting sort______

void countsort(int arr[], int n){
    int freq[10000]; 
    int minVal = INT_MAX, maxVal = INT_MIN;

    for(int  i = 0; i < n; i++){
        maxVal = max(maxVal , arr[i]);
        minVal = min(minVal, arr[i]);
    }
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = minVal, j =0; i <=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    printarr(arr, n);
}

// int main(){
//     int arr[] = {1,4,1,3,2,4,3,7};
//     int n = sizeof(arr)/ sizeof(int);
//     countsort(arr, n);

//     return 0;
// }

// ____________ inbuilt sort_______

int main(){
    int arr[8] = {1,4,1,3,2,4,3,7};
    int n = 8;
    sort(arr , arr+8);
    printarr(arr, n);

    return 0;

}