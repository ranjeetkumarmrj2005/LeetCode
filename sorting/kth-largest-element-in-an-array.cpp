class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=n-k;
        for(int i=0;i<n;i++){
            if(i==count) return nums[i];
        }
        return -1;
    }
};