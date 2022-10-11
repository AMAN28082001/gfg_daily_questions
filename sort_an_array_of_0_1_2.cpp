void sort012(int a[], int n)
{
     int j=0;
   int count[3]={0,0,0};
   for(int i=0;i<n;++i){
       count[a[i]]++;
   }
   for(int i = 0;i<count[0];++i){
       a[j] = 0;
       j++;
   }
   for(int i = 0;i<count[1];++i){
       a[j] = 1;
       ++j;
   }
   for(int i = 0;i<count[2];++i){
       a[j] = 2;
       ++j;
   }
    
}