#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())

using namespace std;


int main()
{
	
	int t; cin >> t;
	while (t--)
	{
		ll x, n; cin >> x >> n;
		ll i = n - (n % 4) + 1;
		for (; i <= n; i++)
		{
			(x & 1?x += i:x-=i);

		}
		cout << x<< "\n";

	}


	





}
