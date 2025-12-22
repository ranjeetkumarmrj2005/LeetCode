class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int i=0;
        int j=n-1;
        while(i<k){
            int x=nums[j];
            nums.insert(nums.begin(),x);
            nums.pop_back(); 
            i++;
        }
        return;
    }
};