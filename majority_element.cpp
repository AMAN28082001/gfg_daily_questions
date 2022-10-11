
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int res=0;
        int count=0;
        for(int i=0;i<size;i++){
            if(count==0){
                res=a[i];
            }
            if(res==a[i]){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<size;i++){
            if(res==a[i]){
                count++;
            }
        }
            if(count>size/2){
                return res;
            }
            else{
                return -1;
            }
    
    }
};