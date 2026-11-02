
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b)
{
    int n = a.size(), m = b.size();

    int pt1 = 0, pt2 = 0;
    vector<int> ans;

    while (pt1 < n && pt2 < m)
    {
        if (a[pt1] == b[pt2] && (ans.empty() || a[pt1] != ans.back()))
        {
            ans.push_back(a[pt1]);
            pt1++;
            pt2++;
        }
        else if (a[pt1] < b[pt2])
            pt1++;
        else
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

    vector<int> ans = intersection(a, b);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
