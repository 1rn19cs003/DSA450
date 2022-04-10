// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// "Common elements between three arrays "
// } Driver Code Ends
class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        int i = 0, j = 0, k = 0;
        vector<int> vect;
        set<int> st;
        int count = 0;
        n1 = n1 - 1;
        n2 = n2 - 1;
        n3 = n3 - 1;
        while (i <= n1 && j <= n2 && k <= n3)
        {
            if (A[i] == B[j] && B[j] == C[k])
            {
                // cout<<A[i]<<" "<<B[j]<<" "<<C[k]<<endl;
                count++;
                st.insert(A[i]);
                // vect.push_back(A[i]);
                i++;
                j++;
                k++;
            }
            else if (A[i] < B[j] && i <= n1)
            {
                i++;
            }
            else if (B[j] < C[k] && j <= n2)
            {
                j++;
            }
            else if (C[k] < A[i] && k <= n3)
            {
                k++;
            }
            // cout<<A[i]<<" "<<B[j]<<" "<<C[k]<<endl;
        }
        for (auto it : st)
        {
            vect.push_back(it);
        }

        // if(i==n1)
        // {

        // }
        // else if(j==n2)
        // {

        // }
        // else if(k==n3)
        // {

        // }
        //  cout<<count<<endl;
        return vect;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for (int i = 0; i < n1; i++)
            cin >> A[i];
        for (int i = 0; i < n2; i++)
            cin >> B[i];
        for (int i = 0; i < n3; i++)
            cin >> C[i];

        Solution ob;

        vector<int> res = ob.commonElements(A, B, C, n1, n2, n3);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends