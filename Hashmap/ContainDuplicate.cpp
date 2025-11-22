#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution  {
public:
  bool containsDupliacte(vector<int>&nums){
    unordered_set<int>s;
    for(int num:nums){ 
        if(s.count(num)){
            return true;
        }
        s.insert(num);
    }
    return false;
  }
};  