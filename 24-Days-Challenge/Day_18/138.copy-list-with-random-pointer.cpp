/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
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

