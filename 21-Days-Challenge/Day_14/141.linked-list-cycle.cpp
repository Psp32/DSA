#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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

/* Ankit saw this slow, fast method from striver once and told me about this method once,
 i solved this question again after a month or so, and suddenly meko yaad aaya esa bhi kuch method tha phir baadme yaad aaya ankit ne btaya tha, usne hashmap data structure ke baare mei bhi explain kiya tha.    Even we can solve this qsn with hashmap too. */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)return true;
        }
        return false;
    }
};
// @lc code=end

