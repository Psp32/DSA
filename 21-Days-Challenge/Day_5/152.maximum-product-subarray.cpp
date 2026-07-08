#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int leftProd=1;
        int rightProd=1;
        for(int i=0;i<nums.size();i++){
            leftProd = leftProd*nums[i];
            ans = max(ans,leftProd);
            rightProd = rightProd*nums[nums.size()-i-1];
            ans = max(ans,rightProd);
            if(leftProd == 0) leftProd = 1;
            if(rightProd == 0) rightProd = 1;
        }
        return ans;
    }
};
// @lc code=end

