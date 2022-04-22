#include <bits/stdc++.h>
#include <ios>
#define ll long long
#define MAX 100
using namespace std;
string calc(char c)
{
    switch (c)
    {
    case 'A':
        return "2";
    case 'B':
        return "22";
    case 'C':
        return "222";
    case 'D':
        return "3";
    case 'E':
        return "33";
    case 'F':
        return "333";
    case 'G':
        return "4";
    case 'H':
        return "44";
    case 'I':
        return "444";
    case 'J':
        return "5";
    case 'K':
        return "55";
    case 'L':
        return "555";
    case 'M':
        return "6";
    case 'N':
        return "66";
    case 'O':
        return "666";
    case 'P':
        return "7";
    case 'Q':
        return "77";
    case 'R':
        return "777";
    case 'S':
        return "7777";
    case 'T':
        return "8";
    case 'U':
        return "88";
    case 'V':
        return "888";
    case 'W':
        return "9";
    case 'X':
        return "99";
    case 'Y':
        return "999";
    case 'Z':
        return "9999";
    case 'z':
        return "0";
    default:
        return "na";
    }
}
int main()
{
    string s = "";
    // cin.ignore();
    // cin.getline(s,MAX,'\n');
    getline(cin, s);
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            s[i] = 'z';
        ans += calc(s[i]);
    }
    cout << s.size() << endl;
    cout << ans << endl;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// }