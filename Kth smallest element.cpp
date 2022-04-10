// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
// "find the kth smallest elemsnts "
 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // 3 4 7 10 15 20
    //20 15 10 7 4 3
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // int n=sizeof(arr);
        priority_queue<int> st;
        for(int i=l;i<=r;i++)
            st.push(arr[i]);
        int c=r;
        // cout<<r<<" "<<l<<endl;
        while(!st.empty())
        {
            // cout<<st.top()<<" ";
            if(c==(k-1))
                return st.top();
            st.pop();
            c--;
        }
        // cout<<endl;
        return 0;
        
        // for(auto a:st)
        // {
        //     if(c==k)
        //         return a;
        //     c++;
        // }
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends