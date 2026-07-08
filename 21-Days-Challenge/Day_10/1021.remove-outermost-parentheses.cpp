#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        //INTUITION - jab starting paranthesis hoga tab cnt=0 hoga aur jab ending paranthesis hoga tab cnt-- krenge and cnt=0 mei last ending paranthesis hoga.Took a very long time to solve this, try this question again with another method like queue.

        string u;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(cnt>0){
                    u.push_back(s[i]);
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0){
                    u.push_back(s[i]);
                }
            }
        }
        return u;
    }
};
// @lc code=end

