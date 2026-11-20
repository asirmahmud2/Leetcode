
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& a, int t)
{
    int l = 0, n = a.size(), r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == t)
            return mid;

        if (a[l] <= a[mid])
        {
            if (a[l] <= t && t < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (a[mid] < t && t <= a[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << search(a, t) << '\n';

    return 0;
}
