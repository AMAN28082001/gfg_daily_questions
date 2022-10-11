  public:
    vector<int> duplicates(int arr[], int n) {
      vector <int >v;
        
        sort(arr,arr+n); 
        
      
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]==arr[i])  
            {
                if(v.empty() or v[v.size()-1]!=arr[i])       
                {
                    v.push_back(arr[i]);
                }
            }
        }
        if(!v.empty())  
        {
            return v;  
        }
        v.push_back(-1); 
    }
};