#include<bits/stdc++.h>
using namespace std;
int smallest_common_substrings(string &A, string &B) 
{
    int freq[26] = {0};
    for (char c : A) {
        freq[c - 'a']++;
    }
    int sum = 0;
    for (char c : B) {
        sum += freq[c - 'a'];
    }
    return sum;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<smallest_common_substrings(a,b)<<endl;
}