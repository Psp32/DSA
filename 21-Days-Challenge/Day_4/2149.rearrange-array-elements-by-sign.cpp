#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j=0;
        int u=1;
        int n=nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                result[j]=nums[i];
                j=j+2;
            }
            if(nums[i]<0){
                result[u]=nums[i];
                u=u+2;
            }
        }
        return result;

    }
};
// @lc code=end

