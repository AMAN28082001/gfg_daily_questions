class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
        string str1=arr[0];
        string str2=arr[N-1];
        int size1=str1.size();
        int size2=str2.size();
        int p1=0,p2=0;
        string ans;
        while(p1<size1 && p2<size2){
            if(str1[p1]==str2[p2]){
                ans.push_back(str1[p1]);
            }
            else{
                break;
            }
            p1++;
            p2++;
        }
        if(ans.size()==0){
            return "-1";
        }
        else{
            return ans;
        }
    }
};