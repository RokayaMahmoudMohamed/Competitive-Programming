#include <bits/stdc++.h>
#define  ll long long


using namespace std;

int main()
{
	int tst; cin >> tst;
	while (tst--)
	{
		int n; cin >> n;
		vector<int>a(n);
		map<int, int>mp1,mp0;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		string s; cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')mp1[a[i]]++;
			else mp0[a[i]]++;
		}
		int j = 1;
		for (auto& i : mp0) i.second = j, j++;
		for (auto& i : mp1)i.second = j, j++;
		

		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')cout<<mp1[a[i]]<<" ";
			else cout<<mp0[a[i]]<<" ";
		}
		cout << "\n";

	}

	


}
