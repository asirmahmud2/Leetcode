
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& a)
{
    int n = a.size(), m = a[0].size();

    int top = 0, bottom = n - 1;
    int right = m - 1, left = 0;

    vector<int> ans;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            ans.push_back(a[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            ans.push_back(a[i][right]);
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
                ans.push_back(a[bottom][i]);
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(a[i][left]);
            left++;
        }
    }

    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vector<int> ans = spiralOrder(a);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
