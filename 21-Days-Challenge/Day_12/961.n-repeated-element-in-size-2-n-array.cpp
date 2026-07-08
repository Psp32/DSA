#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=961 lang=cpp
 *
 * [961] N-Repeated Element in Size 2N Array
 */

// @lc code=start
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            auto it = mpp.find(nums[i]);
            if(it!= mpp.end()){
                return nums[i];
            }
            else{
                mpp[nums[i]] = 1;
            }
        }
        return 0;
    }
};
// @lc code=end

