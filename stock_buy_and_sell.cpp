
class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector <vector<int>> ans;
        int lastbuy=0;
        int profit=-A[0];
        for(int i=1;i<n;i++){
            if(A[i]<=A[lastbuy]){
                profit+=A[lastbuy];
                profit-=A[i];
                lastbuy=i;
            }
            else{
                ans.push_back({lastbuy,i});
                lastbuy=i;
            }
        }
        profit+=A[n-1];
        return ans;
    }
};