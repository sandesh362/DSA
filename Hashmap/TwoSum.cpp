#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
     vector<int>twoSum(vector<int>&nums,int target){
         unordered_map<int,int>m;
         for(int i =0; i<nums.size(); i++){
            int rem= target-nums[i];
            if(m.count(rem)){
                return{m[rem],i};

            }
            m[nums[i]]=i;
         }
         return{};
     }
    };
   

    int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
