
#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    int n = s.size(), neg = 0, i = 0;
    string ans;

    while (i < n && s[i] == ' ')
        i++;

    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
            neg = 1;
        i++;
    }

    for (i; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            ans += s[i];
        else
            break;
    }

    long long num = 0;
    long long limit = neg ? 2147483648LL : 2147483647LL;

    for (int i = 0; i < ans.size(); i++)
    {
        int p = ans[i] - '0';

        if (num > (limit - p) / 10)
            return neg ? INT_MIN : INT_MAX;

        num = num * 10 + p;
    }

    if (neg)
        num = -num;

    return (int)num;
}

int main()
{
    string s;
    getline(cin, s);

    cout << myAtoi(s) << '\n';

    return 0;
}
