// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// "maximum  sun of a subarray "
 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        int mx=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
            mx=max(mx,ans);
            if(ans<0)
                ans=0;
        }
        // cout<<mx<<endl;
        return mx;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends