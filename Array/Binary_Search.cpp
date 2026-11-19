
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    if (nums[l] == target)
        return l;
    else if (nums[r] == target)
        return r;
    else
        return -1;
}

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << search(nums, target) << '\n';

    return 0;
}
