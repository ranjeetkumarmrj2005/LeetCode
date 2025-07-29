
class Solution {
public:
    ListNode* getNodeAtIdx(ListNode* head,int j){
        ListNode* temp=head;
        for(int i=0;i<j;i++){
            temp=temp->next;
        }
        return temp;
    }
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        int size=0;
        while(temp&&temp->next){
            temp=temp->next->next;
            size+=2;
        }
        temp=head;
        int i=0;
        int j=size-1;
        int sum=0;
        int maxpairsum=0;
        while(i<j){
            ListNode* right=getNodeAtIdx(head,j);
            sum=temp->val+right->val;
            if(sum>maxpairsum) maxpairsum=sum;
            temp=temp->next;
            i++;
            j--;
        }
        return maxpairsum;
    }
};