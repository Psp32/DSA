/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map <ListNode*,bool> mpp;
        if(head){
            ListNode* temp = head;
            while(temp->next!=NULL){
                auto it = mpp.find(temp);
                if(it==mpp.end()){ //end ka bhi check krna h
                    mpp[temp]=true;
                    temp=temp->next;
                }
                else{
                    return temp;
                }
            }
        }
        return NULL;
    }
};
// @lc code=end

