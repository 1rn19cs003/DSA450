// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;







 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>vect;
       int arr1[n];
       arr1[0]=0;
       arr1[1]=arr[0];
       for(int i=1;i<n;i++)
       {
           arr1[i+1]=arr[i]+arr1[i];
       }
       int start=1;
       int end=2,i;
    //    for(i=0;i<=n;i++)
    //    {
    //        cout<<arr1[i]<<" ";
    //    }
       while(start<end)
       {
           int val=(arr1[end]-arr1[start]);
           if(val==s)
           {
               vect.push_back(start+1);
               vect.push_back(end);
               return vect;
           }
           else if(val<s)
           {
               end++;
           }
           else
                start++;
       }
        return vect;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends