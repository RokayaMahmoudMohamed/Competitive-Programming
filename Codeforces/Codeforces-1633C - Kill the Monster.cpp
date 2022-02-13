#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())
using namespace std;

bool win(double hc, double dc, double hm, double dm)
{
    double m = ceil(hc / dm);
    double h = ceil(hm / dc);
    return h <= m;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;
        bool ok=0;
        for (long long i = 0; i <= k; i++)
        {
            if (win(hc + (i * a)*1.0, dc + ((k - i) * w)*1.0, hm*1.0, dm*1.0))
            {
                ok=1;
                break;
            }
        }
        cout<<(ok?"YES\n":"NO\n");
           
    }
    return 0;
}
