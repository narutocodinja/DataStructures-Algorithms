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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        ListNode *slow = head, *fast = head;

        while(fast && fast->next){
            slow = slow->next; fast = fast->next->next;
        }
        
        ListNode *secondHalfHead = reverse(slow);
        ListNode *FirstHalfHead = head;
        while(FirstHalfHead && secondHalfHead){
            ListNode *tmp = FirstHalfHead->next;
            FirstHalfHead->next = secondHalfHead;
            FirstHalfHead = tmp;

            tmp = secondHalfHead->next;
            secondHalfHead->next = FirstHalfHead;
            secondHalfHead = tmp;
        }
    if(FirstHalfHead != nullptr) FirstHalfHead->next = nullptr;
        
    }
    
    ListNode* reverse(ListNode* node){
        ListNode* prev = nullptr;
        ListNode* temp = node;
        while(temp){
            temp = temp->next;
            node->next = prev;
            prev = node;
            node = temp;
        }
        return prev;
    }
};
