#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())
using namespace std;

int main()
{
	
	ll a, b, n; cin >> a >> b >> n;
	
	ll p = 10;
	while (n--)
	{
		 bool ok = 0;
		for (int i = 0; i < 10; i++)
		{
			if ((a * p + i) % b == 0)
			{
				a *= p;a += i;
				ok = 1;
				cout << a;
				for (int i = 0; i < n; i++)cout << 0;
				return 0;
			}
		}
		if (!ok)
		{
			cout << -1;
			return 0;
		}
	}

	
	
	
	
	


}
