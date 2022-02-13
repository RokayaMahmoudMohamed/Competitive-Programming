#include <bits/stdc++.h>
#define  ll long long
using namespace std;

const int N = 1e2;
bool prime[N];
void  sieve_v2() {
	for (int i = 0; i < N; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 4; i < N; i += 2) {
		prime[i] = 0;
	}
	for (int i = 3; i * i < N; i += 2) {
		if (prime[i]) {
			for (int j = i * i; j < N; j += i + i) {
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	sieve_v2();
	

    int tst; cin >> tst;
    while (tst--)
    {
        int n; cin >> n;
		for (int i = 3; i < 100; i++)
		{
			if (prime[i])
			{
				if ((n - i - 1 )% i!=0)
				{
					cout << n - i - 1 << " " << i << " 1\n";
					break;
				}
			}
		}


        
    

    }

}
