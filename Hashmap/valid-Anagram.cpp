#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length()) return false;
        unordered_map<char,int>freq;
        for(char c: s)freq[c]++;
        for(char c: t)freq[c]--;

    for(auto &p: freq) {
        if(p.second != 0) return false;
    }
    return true;
        
    }
};
class Solution2 {
   public:
   bool isAnagram(string s,string t){
    if(s.length()!=t.length()) return false;
    int count[26]= {0};
    for(char c:s)count[c-'a']++;
    for(char c:t)count[c-'a']--;
    for(int i=0;i<26;i++)
      if(count[i]!=0) return false;
    return true;
   }
};

int main(){
    Solution2 sol2;  // Using Solution2(this is faster approach)
    Solution sol; // Using Solution
    string s="anagram";
    string t="nagrama";
    if(sol.isAnagram(s,t)){
           cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}