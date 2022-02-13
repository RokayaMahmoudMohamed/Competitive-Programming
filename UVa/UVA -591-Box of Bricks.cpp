#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;
int sum=0,q=0,x=0,rx[101],n,t=0;
int main()
{
    set<string>st;
    while(cin>>n)
    {
        if(n==0)
            break;
        x++;
        for(int i=0;i<n;i++)
        {
            cin>>rx[i];
            sum+=rx[i];
        }
         t=sum/n;
        for(int i=0;i<n;i++)
        {
            if(rx[i]>t)
                q+=rx[i]-t;
        }
        cout<<"Set #"<<x<<"\n"<<"The minimum number of moves is "<<q<<".\n\n";
        q=0;
        sum=0;
        memset(rx,0,sizeof+rx);

    }


    return 0;
}
