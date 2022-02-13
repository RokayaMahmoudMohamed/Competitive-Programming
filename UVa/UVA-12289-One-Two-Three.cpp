#include <iostream>
#include <string>
//#define n        (int)s.size()
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#define all(v) ((v).begin()),((v).end())
#define sz(v) ((int)((v).size()))
using namespace std;
typedef vector<long long>p;
int n;
string s;
int main()
{
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>s;
       if(s.size()==5)
       cout<<3<<"\n";
       else
        {
            if((s[0]=='t'&&s[1]=='w')||(s[1]=='w'&&s[2]=='o')||(s[0]=='t'&&s[2]=='o'))
            cout<<2<<"\n";
           else
            cout<<1<<"\n";

        }
        
   }

    return 0;
}
