
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& a)
{
    vector<int> ans;
    int n = a.size();

    int pt1 = 0, pt2 = 0;

    while (pt1 < n && pt2 < n)
    {
        while (pt1 < n)
        {
            if (a[pt1] > 0)
            {
                ans.push_back(a[pt1]);
                pt1++;
                break;
            }
            pt1++;
        }

        while (pt2 < n)
        {
            if (a[pt2] < 0)
            {
                ans.push_back(a[pt2]);
                pt2++;
                break;
            }
            pt2++;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans = rearrangeArray(a);

    for (int x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}
