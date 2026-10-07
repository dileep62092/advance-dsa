#include<iostream>
#include<climits>
using namespace std;
 

//                 Brute force approach :  time complexity  o(n^3)

void maxSabaaraySum(int *arr, int n){

    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int currSum=0;
            for(int i = start; i <= end; i++){
                currSum += arr[i];
                
            }
            cout<<currSum<<",";

            maxSum = max(maxSum, currSum);
            
        }
        cout<<endl;
    }

    cout<<maxSum;
}

//   optimized approach time complexity o(n^2)

void maxSabaaraySum2(int *arr, int n){

    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){ // start = 2
         int currSum=0;// yaha inilize kiya b/c satrting point hai
        for(int end = start; end < n; end++){ //end  = 2 ,3,4,5
           
            currSum += arr[end];

            maxSum = max(maxSum, currSum);
            
        }
        cout<<endl;
    }

    cout<<maxSum;

}


//               kadane' s algorithm    **** very very important

void maxSabarraySum3(int *arr, int n){
    int maxSum=INT_MIN;
    int currSum = 0;

    for(int  i=0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    cout <<maxSum;

}
int main(){
    int arr[6]= {2,-3,6,-5,4,2};
    maxSabarraySum3(arr,6);
    return 0;
}