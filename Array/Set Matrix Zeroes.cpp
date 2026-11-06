
#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }

    setZeroes(matrix);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";

        cout << '\n';
    }

    return 0;
}
