
#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& a)
{
    int n = a.size();
    int f = -1;

    // Find the pivot
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            f = i - 1;
            break;
        }
    }

    if (f == -1)
    {
        sort(a.begin(), a.end());
    }
    else
    {
        // Find the next greater element and swap
        for (int i = n - 1; i > f; i--)
        {
            if (a[i] > a[f])
            {
                swap(a[i], a[f]);
                break;
            }
        }

        // Sort the remaining suffix
        sort(a.begin() + (f + 1), a.end());
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    nextPermutation(a);

    for (int x : a)
        cout << x << " ";

    cout << '\n';

    return 0;
}
