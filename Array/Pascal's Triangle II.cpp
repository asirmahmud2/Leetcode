
#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int n)
{
    vector<int> pv;

    for (int i = 1; i <= n + 1; i++)
    {
        vector<int> nxt;

        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
                nxt.push_back(1);
            else
            {
                int p = pv[j - 1] + pv[j];
                nxt.push_back(p);
            }
        }

        pv = nxt;

        if (i == n + 1)
            return nxt;
    }

    return pv;
}

int main()
{
    int n;
    cin >> n;

    vector<int> ans = getRow(n);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
