#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;
int g,q=0,f=0,x=0,a=0;
string s,c="",w;
int main()
{
   while(getline(cin,w))
  {
    if(w=="0")
    break;
    g=w[0]-'0';
    for(int j=2;j<w.size();j++)
        s+=w[j];

   x=s.size();
   q=x/g;a=q;
   for(int i=0;i<x;i++)
   {
       if(i==q)
        {
       reverse(c.begin(),c.end());
       cout<<c;
        q+=a;c="";
        c+=s[i];
        }
        else
            c+=s[i];
   }
   if(c!="")
   {
       reverse(c.begin(),c.end());
       cout<<c;
   }
   c="";a=0;x=0;q=0;s="";
   cout<<"\n";
    }

    return 0;
}
