class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        unordered_map<int,int> freq;
        vector<pair<int,int>> ans;
        for(int i=0;i<M;i++){
            freq[B[i]]++;
        }
        for(int i=0;i<N;i++){
            int a=X-A[i];
            for(int j=0;j<freq[a];j++){
                ans.push_back({A[i],a});
            }
        }
    sort(ans.begin(),ans.end());
        return ans;
    }
};