#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            int n = matrix[i].size();
            int low = 0;
            int high = n-1;
            if(matrix[i][low]<=target && target<=matrix[i][high]){
                while(low<=high){
                    int mid = (low+high)/2;
                    if(target<matrix[i][mid]){
                        high = mid-1;
                    }
                    else if(target>matrix[i][mid]){
                        low = mid+1;
                    }
                    else{
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
// @lc code=end

