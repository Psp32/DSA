#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int pivot = -1;
        //find pivot
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]>nums[high]){
                pivot = mid;
                low = mid+1;
            }
            else if(nums[mid]<nums[high]){
                high = mid;
            }
        }
        //return pivot+1 element, that's it .....
        return nums[pivot+1];
    }
};
// @lc code=end

