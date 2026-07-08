#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=3784 lang=cpp
 *
 * [3784] Minimum Deletion Cost to Make All Characters Equal
 */

// @lc code=start
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        // This is my 100th question on leetcode.
        // I started leetcode on Dec 21 2024 and today is Dec 22 2025. So, exactly 1 year 1 day.
        // LONG WAY TO GO. I KNOW, I HOPE U MAKE IT PREM  !!
        long long total_sum = 0;
        unordered_map<char, long long> mp;

        for (int i = 0; i < s.size(); i++) {
            total_sum += cost[i];
            mp[s[i]] += cost[i];
        }

        long long max_Equalchar = 0;
        for (auto &it : mp) {
            max_Equalchar = max(max_Equalchar, it.second);
        }

        return total_sum - max_Equalchar;
    }
};

// @lc code=end

