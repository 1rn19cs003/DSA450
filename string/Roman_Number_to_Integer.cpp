// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  int check(char s)
  {
      switch(s)
      {
          case 'I':return 1;
          case 'V':return 5;
          case 'X':return 10;
          case 'L':return 50;
          case 'C':return 100;
          case 'D':return 500;
          case 'M':return 1000;
      }
  }
    int romanToDecimal(string &str) {
        int sum=0;
        for(int i=0;i<str.size();i++)
        {
            sum+=check(str[i]);
        }
        return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends