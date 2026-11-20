
#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& a, int h)
{
    int l = 1, r = INT_MAX, n = a.size();

    while (r - l > 1)
    {
        int mid = l + (r - l) / 2;
        int t = 0;

        for (int i = 0; i < n; i++)
        {
            int p = (a[i] + mid - 1) / mid;
            t += p;
        }

        if (t > h)
            l = mid;
        else
            r = mid;
    }

    int t = 0;

    for (int i = 0; i < n; i++)
    {
        int p = (a[i] + l - 1) / l;
        t += p;
    }

    if (t <= h)
        return l;
    else
        return r;
}

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << minEatingSpeed(a, h) << '\n';

    return 0;
}
