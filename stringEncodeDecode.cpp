#include <bits/stdc++.h>
using namespace std;

string encode(vector<string> &strs)
{
    string res = "";
    for (string s : strs)
    {
        res += to_string(s.length()) + "#" + s;
    }
    return res;
}

vector<string> decode(string s)
{
    vector<string> decoded;
    int i = 0;
    while (i < s.size())
    {
        int pos = s.find_first_of("#", i);
        int length = stoi(s.substr(i, pos - i));
        string word = s.substr(pos + 1, length);
        decoded.push_back(word);
        i += pos + length + 1;
    }
    return decoded;
}

int main()
{
    vector<string> strs;
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    cout << decode(strs) << endl;

    return 0;
}