#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=INT_MIN;

        for(auto it=st.begin(); it!=st.end(); it++){
            if(st.find(*it-1)==st.end()){
                int cnt = 0;
                while(st.find(*it+cnt)!=st.end()){
                    cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
// @lc code=end

