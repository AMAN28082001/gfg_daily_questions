
int peakElement(int a[], int n)
{
  // Your code here
  int ma=a[0],q=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]>ma)
      {
      ma=a[i];
      q=i;
      }
      
  }
  return q;

}