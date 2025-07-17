class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size(),sum=0,count=0;
        for(int i=0;i<k;i++) sum+=arr[i];
        int i=1;
        int j=k;
        while(j<n){
            if(sum/k>=threshold) count++;
            sum=sum-arr[i-1]+arr[j];
            i++;
            j++;
        }
        if(sum/k>=threshold) return count+1;
        else return count;
    }
};