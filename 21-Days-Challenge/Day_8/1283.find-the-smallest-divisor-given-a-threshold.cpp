#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1283 lang=cpp
 *
 * [1283] Find the Smallest Divisor Given a Threshold
 */

// @lc code=start
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high = *max_element(nums.begin(), nums.end());
        int ans=high;
        while(low<=high){
            int mid = (low+high)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(sum>threshold) break;
                if((nums[i]%mid)!=0){
                    sum=sum+(nums[i]/mid)+1;
                }
                else{
                    sum=sum+(nums[i]/mid);
                }
            }
            if(sum<=threshold){
                if(mid<ans){
                    ans=mid;
                }
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
// @lc code=end

