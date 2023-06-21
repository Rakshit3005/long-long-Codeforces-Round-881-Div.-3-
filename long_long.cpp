#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
bool check(ll a[], int x, int y)
{
    bool ans = true;
    if (x + 1 == y)
    {
        ans = true;
    }
    else
    {
        for (int i = x + 1; i < y; i++)
        {
            if (a[i] != 0)
            {
                ans = false;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        int nc = 0;
        ll sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0)
            {
                nc++;
                v.push_back(i);
            }
        }
        int s = 0;
        if (v.size() > 1)
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (check(a, v[i], v[i + 1]))
                {
                    s++;
                }
            }
        }
        cout << sum << " " << nc - s << "\n";
    }
    return 0;
}