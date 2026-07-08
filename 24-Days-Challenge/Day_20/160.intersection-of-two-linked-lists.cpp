/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0;
        int cnt2=0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1!=NULL){
            temp1 = temp1->next;
            cnt1++;
        }
        while(temp2!=NULL){
            temp2 = temp2->next;
            cnt2++;
        }

        temp1 = headA;
        temp2 = headB;

        if(cnt1>cnt2){
            int sum = cnt1-cnt2;
            while(sum>0){
                temp1=temp1->next;
                sum--;
            }
        }
        else{
            int sum = cnt2-cnt1;
            while(sum>0){
                temp2=temp2->next;
                sum--;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};
// @lc code=end

