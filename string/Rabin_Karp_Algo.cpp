#include<bits/stdc++.h>
#include <ios>
#define ll long long
using namespace std;
int solve(int p,int n,string s2,string s1)
{
    int k=0;
    for(int i=p;i<n;i++)
    {
        if(s2[p]!=s1[k++])
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    // cin>>s1>>s2;
    // getline(cin,s1);
    // getline(cin,s2);
    cin.getline(s1,100);
    cin.getline(s2,100);
    int p=0,ans;
    for(int i=0;i<s1.size();i++)
    {
        if(s2[p]==s1[i])
        {
            ans=solve(p,i,s2,s1);
            if(ans==1)
                cout<<i+1<<endl;
            else
                p=0;
        }
    }
}