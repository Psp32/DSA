/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddhead = new ListNode(-1);
        ListNode* oddtail = oddhead;
        ListNode* evenhead = new ListNode(-1);
        ListNode* eventail = evenhead;
        ListNode* temp = head;
        int cnt = 1;
        while(head != NULL){
            temp = head;
            if(cnt%2 == 1){
                oddtail->next = head;
                oddtail = head;
                head = head->next;
                temp->next = nullptr;
            }
            else{
                eventail->next = head;
                eventail = head;
                head = head->next;
                temp->next = nullptr;
            }
            cnt++;
        }
        oddtail->next = evenhead->next;
        head = oddhead->next;
        delete oddhead;
        delete evenhead;
        return head;
    }
};
// @lc code=end

