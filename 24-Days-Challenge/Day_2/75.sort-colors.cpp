#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int cnt_0=0;
        int cnt_1=0;
        int cnt_2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){cnt_0++;}
            if(nums[i]==1){cnt_1++;}
            if(nums[i]==2){cnt_2++;}
        }
        while(cnt_0>0){
            nums[i]=0;
            i++;
            cnt_0--;
        }
        while(cnt_1>0){
            nums[i]=1;
            i++;
            cnt_1--;
        }
        while(cnt_2>0){
            nums[i]=2;
            i++;
            cnt_2--;
        }
    }
};
// @lc code=end

