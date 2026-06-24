#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int pivot = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(mid < high && nums[mid] > nums[mid+1]) {
                pivot = mid;
                break;
            }
            if(mid > low && nums[mid-1] > nums[mid]) {
                pivot = mid - 1;
                break;
            }
            if (nums[mid]>=nums[low]){
                low = mid+1;
            }
            if(nums[mid]<=nums[high]){
                high = mid-1;
            }
        }
        low = 0;
        high = pivot;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        low = pivot+1;
        high = nums.size()-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};
// @lc code=end

