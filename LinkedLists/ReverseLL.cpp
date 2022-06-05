ListNode* reverseList(ListNode* head) {
        ListNode *cur = nullptr;
        while(head != nullptr){
            ListNode *nxt = head->next;
            head->next = cur;
            cur = head;
            head = nxt;
        }
        return cur;
    }
