//TC=O(N) N=length of the list
//MC=O(1)
class Solution {
public:
    void deleteNode(ListNode* delNode) {
        auto nxt = delNode->next;
        delNode->val = nxt->val;
        delNode->next = nxt->next;
        delete(nxt);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto first=head;
        auto second=head;
        ListNode* prev=NULL;
        while(n--) first=first->next;
        while(first){
            first=first->next;
            prev=second;
            second=second->next;
        }

        if(second->next) deleteNode(second);
        else if(prev) prev->next=NULL;
        else return NULL;
        return head;
    }
};
