/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        vector <int> v;
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            int ans = -1;
            auto it = mpp.find(nums1[i]);
            if(it!=mpp.end()){
                int temp = it->second;
                for(int j=temp+1;j<nums2.size();j++){
                    if(nums2[j]>nums2[temp]){
                        ans = nums2[j];
                        break;
                    }
                }

            }
            v.push_back(ans);
        }
        return v;
    }
};
// @lc code=end

