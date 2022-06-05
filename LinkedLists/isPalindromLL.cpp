    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return true;
        
        ListNode *slow = head, *fast = head, *prev, *temp;
        
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        prev = slow;
        slow = slow->next;
        prev->next = nullptr;
        
        while(slow){
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        }
        fast = head;
        slow = prev;
        
        while(slow){
            if(fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        }
        
        return true;
        
        
        
        
    }
