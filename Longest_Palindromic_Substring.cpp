#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    int n=str.length();
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        return false;
    }
    return true;
}
string longestPalindrome(string S)
{
    if(isPalindrome(S))
    return S;
    
    int n=S.length(),ans=0;
    string sol;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            string str=S.substr(i,j-i+1);
            
            if(isPalindrome(str))
            {
                int len=str.length();
                if(len>ans)
                {
                    ans=len;
                    sol=str;
                }
            }
        }
    }
    return sol;
}
// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.longestPalindrome(S) << endl;
    }
    return 0;
}
