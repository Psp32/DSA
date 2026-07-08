/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head->next == NULL){
            return NULL;
        }
        else{
            ListNode* beforemid = slow;
            while(fast->next != nullptr && fast->next->next != nullptr){
                beforemid = slow;
                fast = fast->next->next;
                slow = slow->next;
            }
            if(fast->next != NULL){
                beforemid = slow;
                slow = slow->next;
            }
            beforemid->next = slow->next;
            delete slow;
        }
        return head;
    }
};
// @lc code=end

