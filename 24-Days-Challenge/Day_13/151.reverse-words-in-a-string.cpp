#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
            else{
                if(temp.size()>0){
                    st.push(temp);
                }
                temp="";
            }
        }
        if(temp.size()>0){
            st.push(temp);
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
            if(st.size()>0){
                s+=' ';
            }
        }
        return s;
    }
};
// @lc code=end

