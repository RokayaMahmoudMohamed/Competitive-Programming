#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <set>

using namespace std;
/*
long long gcd(long long n,long long m)
{
	return (!m) ? n : gcd(m, n % m);


}
*/
using namespace std;
int n,rx[10001],m,x=0,y=0;
long long q=10e12;
int main()
{
    while(cin>>n)
    {
    for(int i=0;i<n;i++)
    {
        cin>>rx[i];
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if((rx[i]+rx[j]==m)&&abs(rx[i]-rx[j])<q)
                {
                    x=rx[i];
                    y=rx[j];
                    q=abs(rx[i]-rx[j]);
                }

        }
    }
    if(x>y)
    swap(x,y);
    cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<".\n\n";
    x=0;y=0;q=10e12;
    memset(rx,0,sizeof+rx);
    }

    return 0;
}
