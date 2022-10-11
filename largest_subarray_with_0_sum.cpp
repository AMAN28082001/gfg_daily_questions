
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int> up;
        int sum=0;
        int len=0;
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(A[i]==0 && len==0){
                len=i;
            }
            if(sum==0){
                len=i+1;
            }
            if (up.find(sum) != up.end()) {
              len = max(len, i - up[sum]);
             }
             else{
                 up[sum]=i;
             }
        }
        return len;
    }
};