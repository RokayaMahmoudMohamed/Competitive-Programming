
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
ll v[N], mem[N],n;
 
ll gen(int i)
{
	
	if (i>=n)return 0;
 
	
	if (mem[i]!= -1)return mem[i];
 
	ll option1 = 0, option2 = 0;
 
	option1 = gen(i + 2) + v[i];
	option2 = gen(i + 1);
	
	return mem[i] = max(option1,option2);
 
}
	
int main() {
 
	Rokaya();
 
	int t; cin >> t;
	for(int x=1;x<=t;x++) {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		memset(mem, -1, sizeof(mem));
		cout <<"Case "<<x<<": "<< gen(0) << "\n";
	}
	
 
 
 
 
} 
