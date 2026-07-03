/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        if(head == NULL || head->next == NULL){
            return true;
        }
        else{
            ListNode* temp = head;
            while(temp->next != NULL){
                v.push_back(temp->val);
                temp = temp->next;
            }
            v.push_back(temp->val);
        }
        int left = 0;
        int right = v.size()-1;
        while(left<right){
            if(v[left] != v[right]){
                return false;
            }
            else{
                left ++;
                right --;
            }
        }
        return true;
    }
};
// @lc code=end

