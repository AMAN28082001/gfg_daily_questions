class solution{    
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int res=arr[0];
        int maxEnd=arr[0];
        for(int i=1;i<n;i++){
            maxEnd=max(maxEnd+arr[i],arr[i]);
            res=max(res,maxEnd);
        }
        return res;
        
    }
};