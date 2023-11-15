#include <bits/stdc++.h>

using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    int n = nums.size();
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }
    vector<pair<int, int>> vp;
    vector<int> v;
    for (auto x : freq)
    {
        vp.push_back(make_pair(x.second, x.first));
    }

    sort(vp.rbegin(), vp.rend());
    for (auto x : vp)
    {
        v.push_back(x.second);
    }

    for (int i = 0; i < k; i++)
    {
        cout << v[i] << endl;
    }

    return v;
}
int main()
{
    int n, k;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cin >> k;
    topKFrequent(nums, k);

    return 0;
}