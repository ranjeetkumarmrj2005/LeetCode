
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL|| left==right) return head;
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int n=1;
        while(temp){
            if(n==left-1)  a=temp;
            if(n==left)    b=temp;
            if(n==right)   c=temp;
            if(n==right+1) d=temp;
            n++;
            temp=temp->next;
        }     
        a->next=NULL;
        c->next=NULL;   
        c=reverseList(b);
        a->next=c;
        b->next=d;
        return head;
    }
};