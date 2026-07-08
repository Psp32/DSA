#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1781 lang=cpp
 *
 * [1781] Sum of Beauty of All Substrings
 */

// @lc code=start
class Solution {
public:
    int beautySum(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            vector <int> v(26,0);
            for(int j=i;j<s.size();j++){
                int max=INT_MIN;
                int min=INT_MAX;
                v[s[j]-'a']++;
                for(int x:v){
                    if(max<x) max = x;
                    if(min>x && x!=0) min = x;
                }
                cnt += max-min;
            }
        }
        return cnt;
    }
};
// @lc code=end

