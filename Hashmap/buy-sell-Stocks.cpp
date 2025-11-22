#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
    public:
    int marketprofit(vector<int>&prices){
        int minPrice= INT_MAX;
        int maxProfit=0;
        for(int price: prices){
            minPrice=min(minPrice, price);
            maxProfit=max(maxProfit,price-minPrice);
        }
        return maxProfit;


    }
};