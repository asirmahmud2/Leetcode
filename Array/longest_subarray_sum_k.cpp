
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& a, int k)
{
    map<int, int> m;

    int len = 0, sum = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (k == sum)
            len = max(i + 1, len);

        if (m.find(sum - k) != m.end())
        {
            int p = i - m[sum - k];
            len = max(p, len);
        }

        if (m.find(sum) == m.end())
            m[sum] = i;
    }

    return len;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << longestSubarray(a, k) << '\n';

    return 0;
}
