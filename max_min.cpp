
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int minm=INT_MAX;
    	int maxm=INT_MIN;
    	for(int i=0;i<N;i++){
    	    minm=min(minm,A[i]);
    	    maxm=max(maxm,A[i]);
    	}
    	return minm+maxm;
    }

};