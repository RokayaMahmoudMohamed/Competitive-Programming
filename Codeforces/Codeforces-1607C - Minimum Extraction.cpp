#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())

using namespace std;


int main()
{
	
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>a(n);
		for (int i = 0; i < n; i++)cin >> a[i];
		if (n == 1)
		{
			cout << a[0] << "\n";
			continue;
		}
		sort(a.begin(), a.end());
		
		int mx = a[0], sum = 0; 
		for (int i = 1; i < n; i++)
		{
			a[i] += sum;
			a[i] -= a[i - 1];
			sum -= a[i - 1];
			
			mx = max(mx, a[i]);
		}
		cout << mx << "\n";

	}


	





}
