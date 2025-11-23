
// Leetcode Problem : 387. First Unique Character in a String
// Time Complexity : O(n)
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution{
     public:
     int firstUniChar(string s){
        unordered_map<char,int>freq;
        for(char c:s){    //count frequency of each character
            freq[c]++;

        }
        for(int i=0;i<s.length();i++){  //find the first unique character using looping it againn
            if(freq[s[i]]==1){
                return i;

            }

        }
        return -1;   //if there is no unique character
     }
};

int main(){
    Solution sol;
    string s="leetcode";
    int index=sol.firstUniChar(s);
    cout<<"The index of the first unique character is: "<<index<<endl;
    return 0;
}