class solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        
      int i;
       if(n%2 == 0)
       {
           for(i=0; i<n; i=i+2)
               swap(arr[i], arr[i+1]);
       }
       
       else
       {
           for(i=0; i<n-1; i=i+2)
               swap(arr[i], arr[i+1]);
       }
   }
};