
#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char, int> m;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int num = 0, n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && m[s[i]] < m[s[i + 1]])
            num -= m[s[i]];
        else
            num += m[s[i]];
    }

    return num;
}

int main()
{
    string s;
    cin >> s;

    cout << romanToInt(s) << '\n';

    return 0;
}
