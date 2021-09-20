//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int i = 0;
        int j = 0;
        vector<int> s1;
        vector<int>::iterator itr;
    
        while(i!=array1.size() && j!=array2.size()){
            if(array1[i]<=array2[j]){
            s1.push_back(array1[i]);
            i++;
                
            }
            else if(array2[j]<array1[i])
            {s1.push_back(array2[j]);
                j++;}
            
            }
        
        while(i!=array1.size()){
            s1.push_back(array1[i]);
            i++;
        }
        while(j!=array2.size()){
            s1.push_back(array2[j]);
            j++;
        }
        int x=0;
        int y = s1.size();
        int arr[y];
        
        for(itr = s1.begin();itr!=s1.end();itr++){
            arr[x] = *itr;
            x++;
        }
        double ans;
        if(y%2 != 0)
        {
            ans = arr[y/2];
        }
         else
         ans = (arr[y/2]+arr[y/2 - 1])/2.00;
    
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends