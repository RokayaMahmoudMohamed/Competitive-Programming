
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
const int N = 6e3 + 200;
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
int mem[N][N];
string s;
int gen(int l,int r)
{
	
	if (l>=r)return 0;
 
	
	if (mem[l][r]!= -1)return mem[l][r];
 
	int option1 = 0, option2 = 0,option3=0;
 
	if(s[l]==s[r])return gen(l+1,r-1);
	option1 = gen(l + 1, r) ;
	option2 = gen(l, r - 1) ;
	
	return mem[l][r] =1+min(option1, option2);
	
 
}
	
int main() {
 
	Rokaya();
 
		
	int t; cin >> t;
	while (t--)
	{
		cin >> s;
		memset(mem, -1, sizeof(mem));
		cout << gen(0, sz(s) - 1) << "\n";
	}
		
	
	
 
 
 
 
}  
