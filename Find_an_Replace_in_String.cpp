// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // for(int i=0;i<S.size();i++)
        // {
        string p=S;
        int len=0;
            for(int j=0;j<Q;j++)
            {
                // cout<<sources[j]<<" "<<index[j]<<endl;
                string temp2=S.substr(index[j],sources[j].size());
                // cout<<temp2<<endl;
                
                if(sources[j]==temp2)
                {
                    
                        p.replace(index[j]+len,sources[j].size(),targets[j]);
                        len+=targets[j].size()-temp2.size();
                    
                }
            }
        return p;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends