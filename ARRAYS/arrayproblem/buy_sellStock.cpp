#include<iostream>
#include<climits>
using namespace std;

 //     time complexity o(n)
 
void maxProfit(int *prices , int n){
    int bestBuy[10000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < n; i++){
        bestBuy[i]=min(bestBuy[i-1], prices[i-1]);
        //cout<<bestBuy[i];

    }

    int maxProfit = 0;
    for(int  i =0; i < n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << maxProfit;
}

int main(){
    int prices[6]={7,1,5,3,6,4}; // if {7,6,5,4,3,2,1} -> maxProfit return 0 yaha par lagatar stock gir raha hai
    int  n = sizeof(prices)/sizeof(int);

    maxProfit(prices, n);
    return 0;
}