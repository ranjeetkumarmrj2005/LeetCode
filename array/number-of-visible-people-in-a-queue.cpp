class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(heights[n-1]);
        for(int i=n-2;i>=0;i--){
            int see=0;
            stack<int>temp;
            while(st.size()>0 && heights[i]>=st.top()){
                int x=st.top();
                temp.push(x);
                st.pop();
                if( st.size()>0 && x<=st.top()){
                    see++;
                }
                
            }
            if(st.size()==0) ans[i]=see+1;
            else ans[i]=see+1;

            while(temp.size()>0){
                st.push(temp.top());
                temp.pop();
            }
            st.push(heights[i]);

        }
        return ans;
    }
};