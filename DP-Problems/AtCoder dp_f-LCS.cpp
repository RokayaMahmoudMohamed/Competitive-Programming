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
string s, t;
int dp[3005][3005];
int solve(int i, int j)
{
	if (i == sz(s) || j == sz(t))
		return 0;
	if (dp[i][j] != -1)return dp[i][j];

	int p1 = 0, p2 = 0, p3 = 0;
	if (s[i] == t[j])
		p1 = solve(i + 1, j + 1) + 1;
	p2 = solve(i + 1, j);
	p3 = solve(i, j + 1);

	return dp[i][j] = max(p1, max(p2, p3));
}
string st = "";
string lcs(int i, int j)
{
	if (i == sz(s) || j == sz(t))
		return "";
	if (s[i] == t[j])return s[i] + lcs(i + 1, j + 1);
	if (solve(i + 1,j) > solve(i,j + 1)) return lcs(i + 1, j);
	return lcs(i, j + 1);
}
int main() {

	Rokaya();

	cin >> s >> t;
	memset(dp, -1, sizeof dp);
	solve(0, 0);
	cout << lcs(0, 0) << "\n";


}
