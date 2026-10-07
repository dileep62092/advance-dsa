#include<iostream>
#include<vector>
using namespace std;

//   -------------- brute force approach-----------

vector<int> pairSum(vector<int> nums , int target){
    vector<int> ans;
    for(int i =0; i <nums.size(); i++){
        for( int j = i +1; j <nums.size(); j++){
            if (nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
// -------------optimized method------
vector<int> pairSum2( vector<int> nums , int target){
    vector<int> ans;
    int i = 0, j = nums.size() - 1;

    while( i < j){
        if(nums[i] + nums[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if (nums[i] + nums[j] > target){
            j--;
        }else{
            i++;
        }
    }
    cout<<"not found";
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum2(nums, 9);
    cout<<ans[0] << ", "<<ans[1]<<endl;
    return 0;
}