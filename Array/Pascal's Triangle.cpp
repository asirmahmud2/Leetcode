
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int n)
{
    vector<vector<int>> ans(n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
                ans[i - 1].push_back(1);
            else
            {
                int p = ans[i - 2][j - 1] + ans[i - 2][j];
                ans[i - 1].push_back(p);
            }
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> ans = generate(n);

    for (auto row : ans)
    {
        for (int x : row)
            cout << x << " ";

        cout << '\n';
    }

    return 0;
}
