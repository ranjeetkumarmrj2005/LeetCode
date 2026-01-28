class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=INT_MAX;
        int minidx;
        for(int i=0;i<n;i++){
            if(minPrice>prices[i]) {
                minPrice=prices[i];
                minidx=i;
            }
        }
        if(minidx==n-1) return 0;
        int maxPrice=INT_MIN;
        for(int i=minidx+1;i<n;i++){
            if(maxPrice<prices[i]) {
                maxPrice=prices[i];
            }
        }
        if(maxPrice-minPrice>0) return maxPrice-minPrice;
        else return 0;
    }
};