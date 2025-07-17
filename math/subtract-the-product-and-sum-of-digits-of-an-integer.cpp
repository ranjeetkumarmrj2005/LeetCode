class Solution {
public:
    int subtractProductAndSum(int n) {
        int productofdigit=1;
        int sumofdigit=0;
        int sum=0;
        while(n>0){
         int k=n%10;
         productofdigit=productofdigit*k;
         sum=sum+k;
         n=n/10;
        }
       return  productofdigit-sum;
        
    }
};