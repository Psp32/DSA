/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,rem=0;
        ListNode* head = NULL;
        ListNode* temp;
        while(l1 && l2){
            sum = l1->val+l2->val;
            if(!head){
                head = new ListNode((rem+sum)%10);
                temp = head;
            }else{
                temp->next = new ListNode((rem+sum)%10);
                temp=temp->next;
            }
            sum+rem>9 ? rem=1:rem=0;
            sum=0;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            temp->next = new ListNode((l1->val+rem)%10);
            temp = temp->next;

            l1->val+rem>9 ? rem=1:rem=0;
            l1 = l1->next;
        }
        while(l2){
            temp->next = new ListNode((l2->val+rem)%10);
            temp = temp->next;

            l2->val+rem>9 ? rem=1:rem=0;
            l2 = l2->next;
        }
        if(rem!=0){
            temp->next = new ListNode(rem);
        }
        return head;
    }
};
// @lc code=end

