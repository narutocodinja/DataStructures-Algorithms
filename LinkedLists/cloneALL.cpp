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
        unordered_map<Node *, Node *> ref;
        Node *temp = head;
        while(temp){
            Node *node = new Node(temp->val);
            ref[temp] = node;
            temp = temp->next;
        }
        
        temp = head;
        Node *newHead = ref[head];
        while(temp){            
            ref[temp]->next = ref[temp->next];
            ref[temp]->random = ref[temp->random];
            temp = temp->next;
        }
        return newHead;
        
    }
};
