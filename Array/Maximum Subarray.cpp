
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& a)
{
    int n = a.size();

    int mx = INT_MIN, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum > mx)
            mx = sum;

        if (sum < 0)
            sum = 0;
    }

    return mx;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << maxSubArray(a) << '\n';

    return 0;
}
