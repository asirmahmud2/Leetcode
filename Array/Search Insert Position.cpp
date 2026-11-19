
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int l = 0, r = nums.size();

    while (r - l > 1)
    {
        int mid = (l + r) / 2;

        if (nums[mid] < target)
            l = mid;
        else
            r = mid;
    }

    if (nums[l] >= target)
        return l;
    else
        return r;
}

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << searchInsert(nums, target) << '\n';

    return 0;
}
