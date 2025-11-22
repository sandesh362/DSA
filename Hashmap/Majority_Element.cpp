#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
//uses extra space 
class Solution {
    public:
    int majorityElement(vector<int>&nums){
        unordered_map<int,int>m;
        for(int num:nums)
        m[num]++;
        for(auto &p:m)
        if(p.second>nums.size()/2)
        return p.first;
        return -1; //idealy never happens





    }
};

// (Boyer–Moore Voting Algorithm) this is best approach as doesnt use extra space
class Solution2 {
public:
 int majorityElement(vector<int>&nums){
    int candidate=0;
    int count=0;
    for(int num:nums){
        if(count==0){
            candidate=num;
        }
        count+= (num==candidate)? 1:-1;
    }
    return candidate;

 }
};