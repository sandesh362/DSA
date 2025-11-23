#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
    public:
    vector<int>intersect(vector<int>&nums1, vector<int>&nums2){
        unordered_map<int,int>freq;
        vector<int>result;
        for(int num:nums1){
            freq[num]++;
        }
        for(int num:nums2){
            if(freq[num]>0){
                result.push_back(num);
                freq[num]--;
            }
        }
        return result;
        

    }
};

int main(){
    Solution sol;
    vector<int>numsq={4,9,5};
    vector<int>nums2={9,4,9,8,4};
    vector<int>result=sol.intersect(numsq, nums2);
    for(int num: result){
        cout<<num<<" ";
    }
    return 0;
    
}