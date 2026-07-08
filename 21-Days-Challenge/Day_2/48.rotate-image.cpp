#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;
        int size1 = matrix[0].size();
        for(int i=0;i<size1;i++){
            for(int j=i;j<size1;j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
            reverse(matrix[i].begin(),matrix[i].end());
        } 
    }
};
// @lc code=end

