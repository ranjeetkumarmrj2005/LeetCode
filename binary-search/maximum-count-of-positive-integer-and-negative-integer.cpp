class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int countpositive=0;
        int countnegative=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0) countnegative++;
            if(nums[i]>0) countpositive++; 
        }
        if(countpositive>countnegative) return countpositive;
        else return countnegative;
    }
};