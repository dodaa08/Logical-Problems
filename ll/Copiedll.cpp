#include <iostream>;
using namespace std;
#include <unordered_map>;

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

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        // step 1 : Copy the linked list and have the same next pointers in it
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        unordered_map<Node*, Node*> m;
        m[head] = head;
        while(oldTemp->next!=NULL){
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        };

        oldTemp = head; newTemp = newHead;
        // Step 2 Recreate the random connections in that linkedlist
        while(oldTemp->next !=NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        };
        
        return newHead;

    }
};