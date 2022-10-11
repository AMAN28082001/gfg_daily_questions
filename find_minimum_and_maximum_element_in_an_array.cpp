

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
     long long max=arr[0],min=arr[0];
   struct pair a;
   for(int i=0;i<n;i++){
       if(arr[i]>max)
       max=arr[i];
       if(arr[i]<min)
       min=arr[i];
   }
   a.max=max;
   a.min=min;
   return a;
}