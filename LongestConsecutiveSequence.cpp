#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> s;
    for (auto it : nums)
    {
        s.insert(it);
    }
    int longestConsecutiveSeq = 0;
    for (auto num : nums)
    {
        if (s.find(num - 1) == s.end())
        {
            int currentNum = num;
            int currentConsecutiveSeq = 1;
            while (s.find(currentNum + 1) != s.end())
            {
                currentConsecutiveSeq++;
                currentNum++;
            }
            longestConsecutiveSeq = max(longestConsecutiveSeq, currentConsecutiveSeq);
        }
    }
    return longestConsecutiveSeq;
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << longestConsecutive(nums) << endl;
    return 0;
}