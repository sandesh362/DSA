#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution{
    public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int>m;
        for(int x:nums)
        m[x]++;
        for(auto &p:m)
        if(p.second==1)
        return p.first;
        return -1; //idealy never happens 
       
}
};   
// but the best approach is by solving it using bitwise opreator XOR
class Solution2 {
public:
   int singleNumber(vector<int>& nums) {
       int result = 0;
       for(int num : nums) {
           result ^= num; // XOR operation   xor removes duplicate bitsand leaves unique
       }
       return result;
   }
};

int main() {
    Solution sol;
    Solution2 sol2; // Using Solution2 (this is the optimal approach)
    std::vector<int> nums = {4, 1, 2, 1, 2};

    int uniqueNumber1 = sol.singleNumber(nums);
    int uniqueNumber2 = sol2.singleNumber(nums);

    std::cout << "Unique number using Solution: " << uniqueNumber1 << std::endl;
    std::cout << "Unique number using Solution2: " << uniqueNumber2 << std::endl;

    return 0;
}