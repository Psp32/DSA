#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(mid>0 && nums[mid]==nums[mid-1]){
                if(((mid-1)%2)!=0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else if(mid+1<nums.size() && nums[mid]==nums[mid+1]){
                if(((mid)%2)==0){
                    low=mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            else{
                return nums[mid];
            }
        }
        return -1;
    }
};
// @lc code=end

