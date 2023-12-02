#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("chiamang.inp", "r", stdin);
    freopen("chiamang.out", "w", stdout);
    int n;
    cin >> n;
    int a[n+5];
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if(s % 2 != 0)  cout << 0;
    else
    {
        int tmp = 0;
        for(int i = 1; i <= n; i++)
        {
            tmp += a[i];
            if(2*tmp == s)
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}
