// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // The main function that returns the arrangement with the largest value as
    // string.
    // The function accepts a vector of strings
    // 	int comp(string a,string b)
    // 	{
    // 	    int flag=0;
    //         for(int i = 0; i < a.length(); ++i)
    //         {
    //             if((a[i] - '0') < (b[i] - '0'))
    //             {
    //               flag=1;
    //             }
    //             else if((a[i] - '0') > (b[i] - '0'))
    //                 break;
    //         }
    //         return flag;
    // 	}

    // static bool compare(string a,string b)
    // {
    //     string s1=a.append(b);//ab
    //     string s2=b.append(a);//ba
    //     return s1>s2;
    // }

    static bool cmp(string a, string b)
    {
        return a + b > b + a;
    }
    string printLargest(vector<string> &arr)
    {

        string ans;
        sort(arr.begin(), arr.end(), cmp);
        for (auto x : arr)
            ans += x;
        return ans;

        // string ans;
        // sort(arr.begin(),arr.end(),compare);
        //// for(auto p:arr)
        ////     cout<<p<<" ";
        // for(int i=0;i<arr.size();i++)
        // {
        //     ans=ans+arr[i];
        // }
        // return ans;

        // aman

        // sort(arr.begin(),arr.end());
        // string s;
        // for(int i=1;i<arr.size();i++)
        // {
        //     s="";
        //     if(arr[i]+arr[i-1]>=arr[i-1]+arr[i])
        //     s+=arr[i]+arr[i-1];
        //     else
        //     s+=arr[i-1]+arr[i];
        //     arr[i]=s;
        // }
        // return s;

        // aman end------

        string res;
        string var1 = arr[0];
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        // for(auto p:arr)
        //     cout<<p<<" ";
        for (int i = 0; i < arr.size(); i++)
        {
            res = res + arr[i];
        }
        return res;

        // for(int i=1;i<arr.size();i++)
        // {
        //     long long int temp1,temp2;
        //     string var2;
        //     var2=arr[i];
        //     string a,b;
        //     a=var2+var1;
        //     b=var1+var2;
        //     int op=comp(a,b);
        //     if(op)
        //     {
        //         var1=(var1+var2);
        //         res=var1;
        //     }
        //     else
        //     {
        //         var1=(var2+var1);
        //         res=var1;
        //     }
        //    // cout<<res<<endl;
        // }
        // cout<<res<<endl;
        // for(auto i :st)
        //     cout<<i<<" ";
        /*
        5485465460
        6054854654

        6054854654
        */
        // 	  return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends