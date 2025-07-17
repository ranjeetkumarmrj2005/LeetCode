class Solution {
public:
    int arrangeCoins(int n) {
        int row=0;
        int i=1;
        while(n>0){
          n=n-i;
           i++;
           if(n<0) break;
           row++;
        }
        return row;
    }
};