    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        
        ListNode *temp = list1;
        if(list1->val <= list2->val){
            list1 = list1->next;
        }
        else{
            temp = list2;
            list2 = list2->next;
        }
        
        ListNode *curr = temp;
        
        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                curr->next = list1;
                list1 = list1 -> next;
            }
            else{
                curr->next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
        }
        if(!list1)
            curr -> next = list2;
        else
            curr -> next = list1;
            
        return temp;
        
        
    }
