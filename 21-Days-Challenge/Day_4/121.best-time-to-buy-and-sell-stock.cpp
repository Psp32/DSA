#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int u;
        int min=prices[0];
        int n=prices.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(min>prices[i]){
                min=prices[i];}
            if(sum<prices[i]-min){
                sum=prices[i]-min;
            }
        }
        return sum;
    }
};
// @lc code=end

