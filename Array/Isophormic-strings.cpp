#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    bool isIsomorphic(string s, string t){
        int mapS[256]={0};
        int mapT[256]={0};
        for(int i =0;i<s.size();i++){
            if(mapS[s[i]]!=mapT[t[i]]){
                return false;
            }
            mapS[s[i]]=i+1;
            mapT[t[i]]=i+1;
        }
    }
    return true;
};

int main(){
    Solution sol;
    string s="egg";
    string t="add";
    if(sol.isIsomorphic(s,t)){
        cout<<s<<" and "<<t<<" are isomorphic strings."<<endl;  
    }else{
        cout<<s<<" and "<<t<<" are not isomorphic strings."<<endl;

    
}
}