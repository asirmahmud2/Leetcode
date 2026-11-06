
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& m)
{
    int n = m.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(m[i].begin(), m[i].end());
    }
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }

    rotate(m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";

        cout << '\n';
    }

    return 0;
}
