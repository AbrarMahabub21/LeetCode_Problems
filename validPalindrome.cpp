#include <bits/stdc++.h>

using namespace std;

string removeOtherStuffs(string s)
{
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    remove(s.begin(), s.end(), ':');
    remove(s.begin(), s.end(), ',');
    return s;
}
/*bool validPalindrome(string s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i < n - 1; j++)
        {
            if (s[i] == s[j])
            {
                i += 2;
                j += 2;
            }
        }
    }
    return true;
} */

int main()
{
    string s;
    cin >> s;

    string str = removeOtherStuffs(s);
    cout << str;
    sort(str.begin(), str.end());

    return 0;
}