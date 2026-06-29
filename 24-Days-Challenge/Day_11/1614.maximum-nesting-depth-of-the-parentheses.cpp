#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i]==')'){
                cnt--;
            }
            else{}
            temp=max(temp,cnt);
        }
        return temp;
    }
};
// @lc code=end

