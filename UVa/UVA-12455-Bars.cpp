//#include "stdafx.h"
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int f=0,indx,sum,a[20],p,n,t;
bool take[20];
void exprt(int indx){
	if(f)return;
	
		if(sum==n)
			f=1;
	
	else{
		
		for(int i=0;i<p;i++)
		{
			if(take[i])continue;
			if(sum+a[i]<=n){
			sum+=a[i];
			take[i]=1;
			exprt(indx+1);
			sum-=a[i];
			take[i]=0;
			}
			
		}
	}
}
	

int main()
{
	cin>>t;
	while(t--){
		cin>>n>>p;
		for(int i=0;i<p;i++)
			cin>>a[i];

		sum=0;
		f=0;
		exprt(0);
		if(f==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}


	return 0;
}
