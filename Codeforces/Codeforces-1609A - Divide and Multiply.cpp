#include<bits/stdc++.h>
#define ll long long
#define sz(s)  (s.size())

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<ll>a(n); int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            while (a[i] % 2 == 0)a[i] /= 2, cnt++;
        }

        sort(a.begin(), a.end());
        
        while (cnt--)a[n - 1] *= 2;
        
       
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];

        cout << sum << "\n";

    }
            
    
    
    

}
 
