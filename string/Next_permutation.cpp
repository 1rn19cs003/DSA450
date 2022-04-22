// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void display(vector<int>arr,int N)
    {
        for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    vector<int> nextPermutation(int N, vector<int> arr){
        int k=-1,l=-1;
        for(int i=0;i<N-1;i++)
        {
            if(arr[i]<arr[i+1])
                k=max(k,i);
        }
        if(k==-1)
        {
            sort(arr.begin(),arr.end());
            // return arr;
        }
        else
        {
            for(int i=0;i<N;i++)
            {
                if(arr[i]>arr[k])
                    l=max(l,i);
            }
            // cout<<k<<" "<<l<<endl;
            // display(arr,N);
            swap(arr[k],arr[l]);
            // display(arr,N);
            reverse(arr.begin()+k+1,arr.end());
        }
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends