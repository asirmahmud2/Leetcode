
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& a)
{
    vector<int> ans;
    int n = a.size();

    int b[n];

    b[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > b[i + 1])
            b[i] = a[i];
        else
            b[i] = b[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
            ans.push_back(a[i]);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans = leaders(a);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
