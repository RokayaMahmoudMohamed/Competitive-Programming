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
int n,f=0,i=0,j=0,x=0,y=0,c=0;
string s;
int main()
{
    while(cin>>s>>n)
 {
     c++;
    for(int a=1;a<=n;a++)
    {
        cin>>x>>y;
        i=min(x,y);
        j=max(x,y);f=0;
        for(int q=i;q<j;q++)
        {
            if(s[q]!=s[q+1])
            {
                f=1;
                break;
            }
        }
        if(a==1)
            cout<<"Case "<<c<<":\n";
        if(f==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    i=0;j=0;

 }

    return 0;
}
