#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res=0;
        int i = s.size()-1;
        while(i>=0){
            if(i>0 && (mpp[s[i]]>mpp[s[i-1]])){
                res = (mpp[s[i]]-mpp[s[i-1]]) + res;
                i=i-2;
            }
            else{
                res = (mpp[s[i]]) + res;
                i--;
            }
        }
        return res;
    }
};
// @lc code=end

