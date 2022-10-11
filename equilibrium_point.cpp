class solution{    
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
     int sum=0;
     int leftsum=0;
     for(int i=0;i<n;++i){
         sum+=a[i];
     }
     for(int i=0;i<n;++i){
         sum-=a[i];
         if(leftsum==sum){
             return i+1;
             
         }
         leftsum+=a[i];
     }
     return -1;
        // Your code here
    }

};   
    