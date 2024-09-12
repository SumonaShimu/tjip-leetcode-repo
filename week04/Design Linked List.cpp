//TC=O(1)for each operation
//MC=O(1)
class MyLinkedList {
public:
    class Node {
        public:
        int val;
        Node* next;
        Node(int _val, Node* _next){
            val=_val;
            next=_next;
        }
    };

    const static int DUMMYval = INT_MIN;
    Node* head=NULL;
    int len;

    MyLinkedList() {
        len=0;
        head=new Node(DUMMYval, NULL);
    }

    int get(int index) {
        if(index<0 || index>=len) return -1;
        auto currentNode = head->next;
        while(index--) currentNode = currentNode->next;
        return currentNode -> val;
    }

    void addAtHead(int val) {
        addAtIndex(0,val);
    }

    void addAtTail(int val) {
        addAtIndex(len,val);
    }

    //[dummy,adds(1)] -> [1,adds(3)] -> [3, adds(4)] -> [4,  ]
    //addAtIndex(1,2)
    //[dummy,adds(1)] -> [1,adds(2)] -> [2,adds(3)] -> [3, adds(4)] -> [4,  ]

    void addAtIndex(int index, int val) {
        if(index<0 || index>len) return;
        auto currentNode = head;
        while(index--) currentNode = currentNode->next;
        auto nxt = currentNode->next;
        currentNode->next= new Node(val,nxt);
        len++;
    }

    //[dummy,adds(1)] -> [1,adds(2)] -> [2,adds(3)] -> [3, adds(4)] -> [4,  ]
    //deleteAtIndex(1)
    //[dummy,adds(1)] -> [1,adds(3)] -> [3, adds(4)] -> [4,  ]

    void deleteAtIndex(int index) {
        if(index<0 || index>=len) return;
        auto currentNode = head;
        while(index--) currentNode = currentNode->next;
        auto nxt = currentNode->next;
        currentNode->next = currentNode->next->next;
        delete(nxt);
        len--;
    }
};
