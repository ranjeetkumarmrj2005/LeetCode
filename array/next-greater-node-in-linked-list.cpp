
class Solution {
public:
    ListNode* reverseList(ListNode* head,int* size) {
    ListNode* CURR=head;
    ListNode* PREV=NULL;
    ListNode* NEXT=head;
    while(CURR){
        NEXT=NEXT->next;
        CURR->next=PREV;
        PREV=CURR;
        CURR=NEXT;
        (*size)++;
    }
    return PREV;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        int size=0;
        ListNode* newhead = reverseList(head,&size);
        ListNode* temp=newhead->next;
        vector<int>v(size,0);
        stack<int>st;
        st.push(newhead->val);
        for(int i=1;i<size;i++){
            while(st.size()>0 && temp->val>=st.top()){
                st.pop();
            }
            if(st.size()==0) v[i]=0;
            else v[i]=st.top();

            st.push(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};