class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        int maximum=INT_MIN;
        for(int i=0;i<k;i++){
            maximum=max(maximum,nums[i]);
        }
        ans.push_back(maximum);
        for(int i=k;i<n;i++){
            maximum=max(maximum,nums[i]);
            ans.push_back(maximum);
        }
        return ans;
    }
};