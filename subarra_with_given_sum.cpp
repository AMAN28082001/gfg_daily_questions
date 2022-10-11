class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s){
    
        vector<int>v;
       long long int sum=0;
       int i,start=0;
       for(i=0;i<n;i++)
       {
           sum+=arr[i];
           
               while(sum>s)          
               {
                   sum-=arr[start];        
                   start++; 
               }
           
           if (sum==s)
           {
               v.push_back(start+1);         
               v.push_back(i+1);        
               break;
           }                       
    
           
       }
       if(v.size()==0)
       {
           v.push_back(-1);
           return v;
       }
       else
       return v; 
    }
};


