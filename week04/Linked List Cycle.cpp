/*
TC=O(n) n=number of nodes
MC=O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        auto fast=head;
        auto slow=head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};
