#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        int ans=high;
        while(low<=high){
            int mid = (low+high)/2;
            int sum=0;
            for(int i=0;i<piles.size();i++){
                if(sum>h) break;
                if((piles[i]%mid)!=0){
                    sum=sum+(piles[i]/mid)+1;
                }
                else{
                    sum=sum+(piles[i]/mid);
                }
            }
            if(sum<=h){
                if(mid<ans){
                    ans=mid;
                }
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
// @lc code=end

