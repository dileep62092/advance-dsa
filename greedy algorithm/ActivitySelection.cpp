#include<iostream>
#include<vector>
using namespace std;


int maxOfactivity(vector<int> &start,vector<int> &end ){
    int count = 1;
    int courtime = end[0];

    for(int i = 1; i <start.size();  i++){
        if (start[i] >= courtime){
            count++;
            courtime = end[i];
        }
    }

    //cout<<count<<endl;
    return count;
}
int main(){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};

    cout << maxOfactivity(start, end);
    return 0;
}