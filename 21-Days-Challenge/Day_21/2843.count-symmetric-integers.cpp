/*
 * @lc app=leetcode id=2843 lang=cpp
 *
 * [2843]   Count Symmetric Integers
 */

// @lc code=start
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low;i<=high;i++){
            int left = 0;
            int right = 0;
            string s = to_string(i);
            if((s.size())%2==0){
                for(int k=0;k<s.size()/2;k++){
                    left = left+s[k];
                }
                for(int j=s.size()/2;j<s.size();j++){
                    right = right+s[j];
                }
            }
            if(left == right && left!=0 ){
                cnt++;
            }
        }
        return cnt;
    }
};
// @lc code=end

