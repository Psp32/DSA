#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        int n = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        int row, col;
        for(int i=0;i<v.size();i++){
            row=v[i].first;
            col=v[i].second;
            for(int j=0;j<n;j++){
                matrix[row][j] = 0;
            }
            for(int k=0;k<matrix.size();k++){
                matrix[k][col] = 0;
            }
        }
    }
};
// @lc code=end

