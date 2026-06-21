#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum=0;
        int cnt=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum-k)!=mpp.end()){
                cnt +=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};
// @lc code=end

