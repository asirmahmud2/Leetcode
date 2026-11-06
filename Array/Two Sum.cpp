
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& a, int t)
{
    map<int, int> m;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        m[a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        int need = t - a[i];

        if (m.find(need) != m.end() && m[need] != i)
        {
            return {i, m[need]};
        }
    }

    return {};
}

int main()
{
    int n, t;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> t;

    vector<int> ans = twoSum(a, t);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
