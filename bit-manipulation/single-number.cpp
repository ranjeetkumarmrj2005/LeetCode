class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int x=0;
        int i=0;
        while(i<nums.size()){
            x=x^nums[i];
            i++;
        }
        return x;
    }
};