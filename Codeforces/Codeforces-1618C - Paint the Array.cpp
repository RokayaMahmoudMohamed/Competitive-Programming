#include <bits/stdc++.h>
#define  ll long long
using namespace std;
ll gcd(ll n, ll m) { if (m == 0)return n; return gcd(m, n % m); }

int main()
{
    int test; cin >> test;
    while (test--)
    {
        int n; cin >> n;
        vector<ll>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        ll mn1 = 0,mn2=0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                mn2 = gcd(mn2, a[i]);
            else
                mn1 = gcd(mn1, a[i]);
            
        }
       // cout << mn1 << " " << mn2 << "\n";
        bool ok1 = 0,ok2=0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 &&a[i]%mn1==0){
                ok1 = 1;
               
            }
                
            else if(i%2==0&&a[i]%mn2==0){
                ok2 = 1;
                
            }
        }
       
        cout << (!ok1 ? mn1 : (!ok2 ? mn2 : 0)) << "\n";

       
        
       
    }

}
