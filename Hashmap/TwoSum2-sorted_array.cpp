#include<iostream>
#include<unordered_map>
#include<vector>
 
using namespace std;

class Solution{
    public:
    vector<int>twoSum(vector<int>&nums,int target){
        int l=0, r=nums.size()-1;
        while(l<r){
            int sum= nums[l]+nums[r];
            if(sum==target){
                return {l+1, r+1};
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int>nums{12,23,45,65,78,99};
    int target =110;
    vector<int>ans= s.twosum(nums,target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}