#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low+high)/2;
            int sum=0;
            int day=0;
            for(int i=0;i<weights.size();i++){
                if((sum+weights[i])>mid){
                    sum=weights[i];
                    day++;                
                }
                else{
                    sum = sum+weights[i];
                }
            }
            day++;
            if(day<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
// @lc code=end

