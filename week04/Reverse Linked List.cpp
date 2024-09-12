//TC=O(N) N=NUM OF NODES
//MC=O(1)

//ITERATIVE WAY-------------------------------------
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        auto currentNode = head;
        ListNode* prevNode = NULL;
        while(currentNode){
            auto nxt = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nxt;
        }
        return prevNode;
    }
};

//RECURSIVE WAY-------------------------------------
class Solution {
public:
    ListNode* reverseList(ListNode* currentNode,ListNode* prevNode=NULL) {
        if(currentNode == NULL) return prevNode;
        auto nxt = currentNode->next;
        currentNode->next = prevNode;

        return reverseList(nxt, currentNode);
    }
};
