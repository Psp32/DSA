/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map <Node*,Node*> mpp;
        Node* temp = head;
        while(temp!=NULL){
            mpp[temp] = new Node(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            mpp[temp]->next = temp->next ? mpp[temp->next]:NULL;
            mpp[temp]->random = temp->random ? mpp[temp->random]:NULL;
            temp = temp->next;
        }
        return mpp[head];
    }
};
// @lc code=end

