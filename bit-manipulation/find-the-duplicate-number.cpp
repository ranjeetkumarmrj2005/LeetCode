class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]!=i&&nums[i]!=nums[nums[i]]) swap(nums[i],nums[nums[i]]);
            else return nums[i];
        }
        return -1;
    }
};