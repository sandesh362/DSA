#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution{
    public:
    bool containsNearbyDuplicate(vector<int>&nums, int k){
        unordered_map<int,int>lastseen;
        for(int i=0; i<nums.size();i++){
            int num = nums[i];
            if(lastseen.count(num)&& i - lastseen[num] <=k){
                return true;
            }
            lastseen[num]=i;
        }
        return false;

    }
};

int main(){
    Solution sol;
    vector<int>nums={1,2,3,1,2,3};
    int k=2;
    if(sol.containsNearbyDuplicate(nums,k)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}