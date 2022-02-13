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
const ll mod = 1e9+7;
int DCNP(double a, double b) {
	if (fabs(a - b) < EPS)
		return 0;
	return (a < b ? -1 : 1);
}
ll gcd(ll n, ll m) { if (m == 0)return n;	return gcd(m, n % m); }
ll lcm(ll n, ll m) { ll ans = (n * m) / gcd(n, m); return ans; }
/*************************************************************************************************************/
ll a[N], b[N], c[N], mem[N][4], n;

ll gen(int i, int col)
{
	
	if (i==n)return 0;

	
	if (mem[i][col] != -1)return mem[i][col];

	ll p1 = 0, p2 = 0, p3 = 0;
	if (col != 1) {
		 p1 = gen(i + 1, 1) + a[i];
		
	}
	if (col != 2) {
		 p2 = gen(i + 1, 2) + b[i];
	}
	if (col != 3) {
		  p3 = gen(i + 1, 3) + c[i];
	}

	return mem[i][col] = max(p1, max(p2, p3));

}
	
int main() {

	Rokaya();

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}
	memset(mem, -1, sizeof (mem));
	cout << gen(0, 0) << "\n";
	




}
