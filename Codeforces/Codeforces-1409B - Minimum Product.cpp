#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())
using namespace std;
void solve(ll &a, ll &x, ll &n)
{
	if (n > a && x == 0)
	{
		n -= a; a = 0;
	}
	else if (n > a && x != 0)
	{
		n -= abs(x-a); a = x;
	}
	else if (n < a||a==n)
	{
		if (a - n < x)
		{
			n -= abs(x - a);
			a = x;
			
		}
		else
		{
			a -= n;
			n = 0;
		}
	}
}
int main()
{
	int t; cin >> t;
	ll a, b, x, y, n; 
	while (t--)
	{
		cin >> a >> b >> x >> y >> n;
		ll a_copy=a, b_copy=b, x_copy=x, y_copy=y, n_copy=n;
		
			solve(b, y, n);
			solve(a, x, n);
			ll ans1 = a * b;
		
		
			solve(a_copy, x_copy, n_copy);
			solve(b_copy, y_copy, n_copy);
			
			ll ans2 = a_copy * b_copy;
		
		
		
		cout << min(ans1,ans2) << "\n";
	}

	
	
	
	
	


}
