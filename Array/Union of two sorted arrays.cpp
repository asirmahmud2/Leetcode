
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b)
{
    int n = a.size(), m = b.size();

    vector<int> ans;
    int pt1 = 0, pt2 = 0, x;

    while (pt1 < a.size() && pt2 < b.size())
    {
        if (a[pt1] <= b[pt2])
        {
            x = a[pt1];
            pt1++;
        }
        else
        {
            x = b[pt2];
            pt2++;
        }

        if (ans.empty() || ans.back() < x)
            ans.push_back(x);
    }

    while (pt1 < a.size())
    {
        if (ans.empty() || ans.back() != a[pt1])
            ans.push_back(a[pt1]);

        pt1++;
    }

    while (pt2 < b.size())
    {
        if (ans.empty() || ans.back() != b[pt2])
            ans.push_back(b[pt2]);

        pt2++;
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    vector<int> b(m);

    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> ans = findUnion(a, b);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
