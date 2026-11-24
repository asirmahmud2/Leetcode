
#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int mx = 0, n = s.size(), cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            cnt++;
        else if (s[i] == ')')
            cnt--;

        mx = max(mx, cnt);
    }

    return mx;
}

int main()
{
    string s;
    getline(cin, s);

    cout << maxDepth(s) << '\n';

    return 0;
}
