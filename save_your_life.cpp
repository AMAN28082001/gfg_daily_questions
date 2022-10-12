
class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here   
          int mp[256]={0};
          int len=1,end=0,cur_len=1,cur_end=0;
          for(int i=0;i<n;i++){
              mp[x[i]]=b[i];
          }
          int max_sum,curr;
          max_sum=w[0];
          curr=w[0];
          if(mp[w[0]]!=0){
              max_sum=mp[w[0]];
              curr=mp[w[0]];
          }
          for(int i=1;i<w.size();i++){
              int cc=w[i];
              if(mp[w[i]]!=0){
                  cc=mp[w[i]];
              }
              if(curr+cc>cc){
                  curr=curr+cc;
                  cur_end=i;
                  cur_len++;
                  if(curr>max_sum){
                      max_sum=curr;
                      end=cur_end;
                      len=cur_len;
                  }
              }
              else{
                  if(curr!=0){
                      cur_len=0;
                  }
                  cur_len++;
                  curr=cc;
                  cur_end=i;
                  if(cc>max_sum){
                      max_sum=cc;
                      end=cur_end;
                      len=cur_len;
                  }
              }
          }
          int i=end-len+1;
          string res="";
          while(len--){
              res+=w[i++];
          }
          return res;
      }
};