class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(minPrice>prices[i]) {
                minPrice=prices[i];
            }
            else maxprofit=max(maxprofit,prices[i]-minPrice);
        }
        return maxprofit;
    }
};