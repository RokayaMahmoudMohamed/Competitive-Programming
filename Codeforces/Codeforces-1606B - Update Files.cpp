#include <bits/stdc++.h>
#define  ll long long
using namespace std;


int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, k; cin >> n >> k;
        
        ll ans = 1, cnt = 0;
        while (ans < n&&ans<k)
        {
            ans *=2;
            cnt++;
        }
        n -= ans;
        cnt += ceil(n*1.0 / k);
        cout << cnt << "\n";
    }

}
