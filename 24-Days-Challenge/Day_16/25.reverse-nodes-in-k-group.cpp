/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        int total_node = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            total_node++;
        }

        int iter = total_node / k; 
        int cnt = 1;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next_node = NULL;

        ListNode* prev_temp = NULL;
        ListNode* firstt = NULL;
        ListNode* group_start = head;

        while (iter > 0) {
            cnt = 1;
            prev = NULL;
            group_start = curr;

            while (cnt <= k) {
                next_node = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next_node;
                cnt++;
            }

            if (prev_temp != NULL)
                prev_temp->next = prev;
            else
                firstt = prev;
            group_start->next = curr;
            prev_temp = group_start;

            iter--;
        }

        return firstt;
    }
};

// @lc code=end

