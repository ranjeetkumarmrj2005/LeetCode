class Solution {
public:
      ListNode* reverseList(ListNode* head) {
       if(head==NULL || head->next==NULL) return head;
       ListNode* newHead=reverseList(head->next);
       head->next->next=head;
       head->next=NULL;
       return newHead;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* c=new ListNode(-1);
        ListNode* newHead=c;
        ListNode* temp=head;
        while(temp){
           ListNode* Node=new ListNode(temp->val);
           c->next=Node;
           c=c->next;
           temp=temp->next;
        }
        c->next=NULL;
        c=c->next;
        newHead=newHead->next;
        temp=head;
        c=reverseList(newHead);
        while(c){
            if(c->val!=temp->val) return false;
            c=c->next;
            temp=temp->next;
        }
        return true;
    }
};