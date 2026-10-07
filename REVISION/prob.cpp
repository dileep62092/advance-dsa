#include<iostream>
#include<climits>
using namespace std;

// int main(){

//     int n;
//     cout<<"enter length of array :";
//     cin >>n;

//     int marks[n];
//     // define of array
//     // int marks[25] = {7,5,2,1,3};
//     // int marks[5];
//     //  int n = sizeof(marks)/sizeof(int);
//     // input

//     for(int i = 0; i < n; i++){
//         cin >> marks[i];
//     }

//     //output
   
//     for(int i = 0; i < n; i++){
//         cout<<marks[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// find the largest element in the arrays

// int main(){
//     int arr[] = {5,4,3,9,12};
//     int n = sizeof(arr)/ sizeof(int);

//     int max = arr[0];

//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << max;
// }

// int main(){
//     int a = 5;
//     int *ptr = &a;

//     // cout <<ptr <<" = " << &a<<endl;
//     // cout << *(ptr);

//     int arr[] = {5,4,3,9,12};
//     cout << arr<<endl;
//     cout << *arr << endl;
//     cout << *(arr + 3)<<endl;
//     return 0;
// }

// always use pass by reference when array pass to the function

// void func (int arr[]){
//     arr[0] = 1000;
// }
// void func2(int *ptr){
//     ptr[0]=1000;
// }
// int main (){
//     int arr[] = { 4,5,6,8,9,4};
//     int n = sizeof(arr) / sizeof(int);
//     func(arr);
//     func2(arr);
//     cout << arr[0];// passing array name is equivalent to passing the pointer
//     return 0;
// }

// print arrays elements

// void printArr(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         cout << nums[i]<<",";
//     }
//     cout << endl;
// }
// int main(){
//     int arr[] = { 4,5,6,8,9,4};
//     int n = sizeof(arr) / sizeof(int);
//     printArr(arr, n);
//     return 0;
// }


//*       Linear Search 

// int LinearSearch(int ptr[], int n , int key){
//     for(int i = 0; i < n; i++){
//         if(ptr[i] == key)
//             return i;
//     }

//     return -1;
// }
// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n = sizeof(arr)/sizeof(int);
   

//     cout << LinearSearch(arr, n , 10);
//     return 0;

// }


// ***     reverse of array 
//    1. with extra space 


// void reverseArr(int arr[], int n){
    
//     for(int i = 0; i < n; i++){
//         cout << arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/ sizeof(int);

//     int copyArr[n];
//     for(int i = 0; i < n; i++){
//         int  j = n - i - 1;
//         copyArr[i] = arr[j];
//     }

//     for(int i = 0; i<n; i++){
//         arr[i] = copyArr[i];
//     }
//     reverseArr(arr, n);
//     return 0;
// }

// *    without extra space 
// void ReverseArr(int arr[], int n){
//     int st = 0;
//     int end = n -1;

//     while(st < end){ // also use     (st <= end)
//         int temp = arr[st];
//         arr[st] = arr[end];
//         arr[end] = temp;

//         // swap
//         //swap(arr[st], arr[end]);
        
//         st++;
//         end--;
//     }

//     for(int i = 0; i < n; i++){
//         cout << arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/sizeof(int);

//     ReverseArr(arr, n);
//     return 0;
// }

// int BinearySearch(int arr[], int n, int key){
//     int st= 0 , end = n - 1;

//     while(st <= end){ // yaha equal to use hua hai its very important b/c 
//                       // last me agar ek element bacha hai ushke liye bhi check karte hai

//         int mid = (st + end)/2;

//         if(arr[mid] == key)  return mid;
//         else if (arr[mid] < key)  st = mid + 1;
//         else end = mid - 1;

//     }

//     return -1;
// }
// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n = sizeof(arr) / sizeof(int);

//     cout << BinearySearch(arr, n, 6);
//     return 0;
// }


//  *           array pointer -->> array pointer acts like a constant pointer

// int main(){
//     int x = 10;
//     int *ptr = &x;

//     int y = 20;
//     ptr = &y;

//     cout <<*ptr <<"\n";
//     return 0;
// }

//   yeh possible hai ki hum baad me value change kar sakte hai
   //      but array me nahi kar sakte
   

   //        **    print subarray of given array

   // void printSubrrays(int arr[], int n){
   //    for(int i = 0; i < n; i++){
      
   //       for(int j = i; j < n;  j++){
   //          //cout << '(' << i << ',' << j <<')';
            
   //          for(int start = i; start <= j; start++){
              
   //             cout << arr[start];
   //          }
   //          cout <<",";
   //       }
   //       cout <<endl;


   //    }
   // }
   // int main(){
   //    int arr[] = {1,2,3,4,5};
   //    int n = sizeof(arr)/sizeof(int);

   //    printSubrrays(arr,n);
   //    return 0;
   // }


   //    * print  max subarray sum
   

   //  ___________Brute force approach___________
   void MaxSubarray(int arr[], int n){
      int maxSum = INT_MIN;
      for(int i = 0; i < n; i++){
         
         for(int j = i; j < n; j++){
            int sum =0;
            for(int start = i; start <= j; start++){

               sum = sum + arr[start];
               // cout <<arr[start];
               

            }
            cout <<sum <<",";
            maxSum = max(maxSum, sum);

            // cout <<",";
         }
         cout <<endl;
      }

      cout <<"maximum subarray sum :" << maxSum;
   }

   // ________________optimized t. c.  O(n^2)____________
   void MaxSubarray2(int arr[], int n){
      int maxSum = INT_MIN;
      for(int i = 0; i < n; i++){
         int sum = 0;
         for(int j = i; j < n; j++){
            sum += arr[j];
            maxSum = max(maxSum, sum);

            // cout <<",";
         }
         cout <<endl;
      }

      cout <<"maximum subarray sum :" << maxSum;
   }

   // ____________kadanes algorithm_________

   void maxSubarraySum(int arr[], int n){
      int maxSum = INT_MIN;
      int currsum = 0;

      for(int i =0; i < n; i++){
         currsum += arr[i];
         maxSum = max(maxSum, currsum);

         if(currsum < 0)
             currsum =0;
      }

      cout << maxSum;
   }


   // int main(){
   //    int arr[] = {2,-3,6,-5,4,2};
   //    int n = sizeof(arr)/sizeof(int);

   //    //MaxSubarray2(arr, n);
   //    maxSubarraySum(arr, n);
   //    return 0;
   // }


   // ______________Buy & Stacks problem(concept building)_____
   
   void maxProfit(int arr[], int n){
      int bestbuy[100000];
      bestbuy[0] = INT_MAX;
      for(int i = 1; i < n; i++){
         bestbuy[i] = min(bestbuy[i-1], arr[i-1]);
      }
      int maxProfit = 0; // ishliye liya if profit -ve hai print kare 0
      for(int i = 0; i < n; i++){
          int currProfit = arr[i] - bestbuy[i];

          maxProfit = max(maxProfit, currProfit);
      }

      cout <<maxProfit <<endl;

   }
   // int main(){
   //    int arr[] = {7,1,5,3,6,4};
   //    int n = sizeof(arr)/sizeof(int);

   //    maxProfit(arr, n);
   //    return 0;
   // }


   //_______________trapping water in vally_____
   

   void trap(int height[], int n){
      int leftmax[20000];
      int rightmax[20000];
      //int leftmax[0] =INT_MIN;
     // int rightmax[n-1] = INT_MIN;
      leftmax[0] = height[0];
      rightmax[n-1] = height[n-1];
      for(int i = 1; i < n; i++){
         leftmax[i] = max(leftmax[i-1], height[i-1]);
      }
      for(int i = n-2; i >=0; i--){
         rightmax[i] = max(rightmax[i+1], height[i+1]);
      }

      int watertrap = 0;
   
      for(int i = 0; i<n; i++){

         int cuurWater = min(leftmax[i], rightmax[i]) - height[i];

         if(cuurWater > 0){
            watertrap += cuurWater;
         }
      }

      cout << watertrap;
   }
   // int main(){
   //    int height[] = {4,2,0,6,3,2,5};
   //    int n = sizeof(height)/sizeof(int);
   //    trap(height, n);
   //    return 0;
   // }
  

   //   _______________2-D arrays______________

// int main(){
//    int student[3][3] = {{45,78,89},
//                         {85,98,87},
//                         {78,54,65}};
//    cout << student[1][1]; // access 98
//    return 0;
// }

//__________  input & output of 2-D arrays______________

// int main(){
//    int arr[3][4]; // inisilize
//    int n = 3, m = 4;
//    for(int i = 0; i <n; i++){ // rows
//       for(int j = 0; j < m; j++){// cols
//          cin >> arr[i][j];
//       }

//    }

   //  output

//       for(int i = 0; i <n; i++){
//          for(int j = 0; j < m; j++){
//              cout << arr[i][j] <<" ";
//          }

//          cout << endl;
       
//       }
// }


// _________ problem on SPIRAL MATRIX______________
