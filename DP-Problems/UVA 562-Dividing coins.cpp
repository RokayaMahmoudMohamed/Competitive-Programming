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
const int N = 2e5 + 1;
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
int n, i, sum = 0;
vector<int>v(105);
int dp[105][50005];
int solve(int i, int cur)
{
	if (i == n)return abs(cur - (sum - cur));
	if (dp[i][cur] != -1)return dp[i][cur];

	return dp[i][cur] = min(solve(i + 1, cur + v[i]), solve(i + 1, cur));


}
int main() {

	Rokaya();
	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		memset(dp, -1, sizeof dp);
		cout << solve(0, 0) << "\n";
		sum = 0;
	}


}
