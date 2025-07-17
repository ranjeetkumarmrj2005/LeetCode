

class Solution {
public:
    ListNode* getNodeAtidx(ListNode* head,int idx){
        ListNode* temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        return temp;
    };
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        int i=1;
        int j=n;
        while(i<j){
            ListNode* left=getNodeAtidx(head,i);
            ListNode* right=getNodeAtidx(head,j);
            int t=left->val;
            left->val=right->val;
            right->val=t;
            i++;
            j--;
        }
        return head;
    }
};