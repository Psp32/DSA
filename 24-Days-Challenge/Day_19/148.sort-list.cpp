/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        map<int,int> mpp;
        ListNode* temp = head;
        while(temp!=NULL){
            mpp[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            while((it->second)>0){
                temp->val = it->first;
                temp = temp->next;
                it->second--;
            }
        }
        return head;
    }
};
// @lc code=end

