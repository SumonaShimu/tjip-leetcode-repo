/*
TC=O(1)
MC=O(1)

(1)--> (2)--> [3]--> (4)-->NUll
(1)--> (2)--> [4]--------->NUll
 */

class Solution {
public:
    void deleteNode(ListNode* delNode) {
        auto nxt = delNode->next;
        delNode->val = nxt->val;
        delNode->next = nxt->next;  //line 16 & 17 canbe written as line 18
        delete(nxt);
    }
};
