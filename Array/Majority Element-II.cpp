
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums)
{
    unordered_map<int, int> mp;
    vector<int> ans;

    int n = nums.size();

    // Count frequencies
    for (int x : nums)
    {
        mp[x]++;
    }

    // Find elements appearing more than n/3 times
    for (auto it : mp)
    {
        if (it.second > n / 3)
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = majorityElement(nums);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
