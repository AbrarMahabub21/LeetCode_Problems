#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v;
    int cnt = 0, product = 1;
    int div;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            cnt++;
            continue;
        }
        else
        {
            product *= nums[i];
        }
    }

    if (cnt > 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (cnt >= 2)
            {
                product = 0;
                v.push_back(product);
            }
        }
    }
    else if (cnt == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                v.push_back(product);
            }
            else
            {
                v.push_back(zero);
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            div = product / nums[i];
            v.push_back(div);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    productExceptSelf(v);
    return 0;
}