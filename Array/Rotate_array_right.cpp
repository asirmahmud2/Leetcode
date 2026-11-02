#include <bits/stdc++.h>
using namespace std;

#define int long long
#define sp ' '

void rotate(int *a, int k, int x)
{
    if (x == 0)
        return;

    k %= x;
    reverse(a, a + x);
    reverse(a, a + k);
    reverse(a + k, a + x);
    
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, k;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
        cin >> a[i];
    cin >> k;
    rotate(a, k, x);

    return 0;
}