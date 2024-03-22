#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int cnt = 1;
    sort(nums.begin(), nums.end());
    if (nums.size() == 0)
    {
        cnt = 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i + 1] - nums[i] == 1)
        {
            cnt++;
        }
    }
    return cnt;
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