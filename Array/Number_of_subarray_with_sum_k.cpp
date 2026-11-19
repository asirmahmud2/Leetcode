
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& a, int k)
{
    map<int, int> m;

    int len = 0, sum = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum == k)
            len++;

        if (m.find(sum - k) != m.end())
        {
            int p = m[sum - k];
            len += p;
        }

        m[sum]++;
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

    cout << subarraySum(a, k) << '\n';

    return 0;
}
