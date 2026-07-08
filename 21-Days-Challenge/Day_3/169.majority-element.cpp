#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;}
        for(auto it: mpp){
            if(it.second>(nums.size())/2){
                return it.first;
            }
        }
        return 0;
    }
};
// @lc code=end

