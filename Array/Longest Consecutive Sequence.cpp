
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& a)
{
    map<int, int> m;

    for (int i : a)
        m[i]++;

    int cnt = 0, mx = 0, pv;
    bool first = true;

    for (auto i : m)
    {
        if (i.first == pv + 1 || first)
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }

        pv = i.first;
        first = false;

        if (cnt > mx)
            mx = cnt;
    }

    return mx;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << longestConsecutive(a) << '\n';

    return 0;
}
