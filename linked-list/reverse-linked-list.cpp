
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* CURR=head;
        ListNode* PREV=NULL;
        ListNode* NEXT=head;
        while(CURR){
            NEXT=NEXT->next;
            CURR->next=PREV;
            PREV=CURR;
            CURR=NEXT;
        }
        return PREV;
    }
};