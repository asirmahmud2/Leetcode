
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& a)
{
    int n = a.size();

    map<int, int> mp;

    for (int i = 0; i < n; i++)
        mp[a[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > n / 2)
            return a[i];
    }

    return a[0];
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << majorityElement(a) << '\n';

    return 0;
}
