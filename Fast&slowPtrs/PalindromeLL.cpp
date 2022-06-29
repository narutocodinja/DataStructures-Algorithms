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
    ListNode* reverse(ListNode* head){
        ListNode *prev = nullptr;
        
        while(head){
            ListNode *nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        
        ListNode *slow = head, *fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *mid = slow;
        
        slow->next = reverse(slow->next);
        
        ListNode *dummy = head;
        slow = slow->next;
        while(slow){
            if(dummy->val != slow->val) return false;
            slow = slow->next;
            dummy = dummy->next;
        }
        
        return true;
    }
};
