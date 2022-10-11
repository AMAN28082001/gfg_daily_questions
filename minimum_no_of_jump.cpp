
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int rn=arr[0];
        int sl=arr[0];
        int jp=1;
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jp;
            }
            rn=max(rn,i+arr[i]);
            sl--;
            if(sl==0){
                jp++;
                if(rn<=i){
                    return -1;
                }
                sl=rn-i;
            }
        }
        return -1;
        
    }
};