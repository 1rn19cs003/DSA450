// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// "sort the 0's ,1's ,and 2's "

 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                c0++;
            else if(a[i]==1)
                c1++;
            else
                c2++;
        }
        int i,j,k;
        for(i=0;i<c0;i++)
        {
            a[i]=0;
        }
         for(j=i;j<c1+c0;j++)
        {
            a[j]=1;
        }
         for(k=j;k<c2+c0+c1;k++)
        {
            a[k]=2;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends