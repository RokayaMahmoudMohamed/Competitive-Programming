/****************************************بسم الله الرحمن الرحيم **********************************************/
/***********************اللهم لا سهل الا ما جعلته سهلا وانت تجعل الحزن ان شأت سهلا**************************/
#include <iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<unordered_map>
#include<set>
#include<iomanip>
#include<string>
#include<stack>
#include<list>
#include<bitset>
#include <sstream>  
#include<fstream>
#include<unordered_set>
//# pragma GCC optimize ("03")
#include<bits/stdc++.h>
const double PI = 3.14;
using namespace std;
#define cnt_leading_zero_bits(x) __builtin_clzll(x);
void Rokaya() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }
const double EPS = 1e-6;
const int N = 1e5 + 1;
#define all(v)  ((v).begin()), ((v).end())
#define ll long long 
#define sz(s)           (s.size())
const ll mod = 1000000007;
int DCNP(double a, double b) {
	if (fabs(a - b) < EPS)
		return 0;
	return (a < b ? -1 : 1);
}
ll gcd(ll n, ll m) { if (m == 0)return n;	return gcd(m, n % m); }
ll lcm(ll n, ll m) { ll ans = (n * m) / gcd(n, m); return ans; }
/*************************************************************************************************************/
ll n, m, d, q,a[205], dp[205][21][205];
ll modul(ll num)
{
	return (num%d + d) % d;
}
ll solve(ll i, ll cnt, ll cur)
{
	if (i == n)
	{
		if (cnt == m)
			return cur%d == 0;

		return 0;
	}
	if (cnt == m)
		return cur % d == 0;

	if (dp[i][cnt][cur] != -1)return dp[i][cnt][cur];

	return dp[i][cnt][cur] = solve(i + 1, cnt + 1, modul(cur + a[i]) ) +
		solve(i + 1, cnt, cur);


}
int main() {

	Rokaya();

	int c = 1;
	while (cin >> n >> q) {
		if (n == 0 && q == 0)return 0;
		for (ll i = 0; i < n; i++)cin >> a[i];
		cout << "SET " << c++ << ":\n";
		int qy = 1;
		while (q--)
		{
			cin >> d >> m;
			memset(dp, -1, sizeof dp);
			cout << "QUERY " << qy++ << ": ";
			cout << solve(0, 0, 0) << "\n";
		}
	}



}
