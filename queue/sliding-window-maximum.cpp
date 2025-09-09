class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        vector<int>ans;
        int n=nums.size();
        int i=0;
        int j=k;
        while(j<=n){
        int maximum=INT_MIN;
            for(int l=i;l<j;l++){
                maximum=max(maximum,nums[l]);
            }
            ans.push_back(maximum);
            i++;
            j++;
        }
        return ans;
    }
};