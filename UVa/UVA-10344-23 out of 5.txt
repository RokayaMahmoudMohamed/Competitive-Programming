//#include "stdafx.h"
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int f=0,indx,sum,a[5];
bool take[5];
void exprt(int indx){
	if(indx==5)
	{
		if(sum==23)
			f=1;
	}
	else{
		for(int i=0;i<5;i++)
		{
			if(take[i])continue;
			sum+=a[i];
			take[i]=1;
			exprt(indx+1);
			sum-=a[i];
			take[i]=0;
			if(indx){
			sum*=a[i];
			take[i]=1;
			exprt(indx+1);
			sum/=a[i];
			take[i]=0;

			sum-=a[i];
			take[i]=1;
			exprt(indx+1);
			sum+=a[i];
			take[i]=0;
			}
		}
	}
}
	

int main()
{
	while(true){
		int c=0;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
			if(a[i]==0)
				c++;
		}
		if(c==5)
			break;
		sum=0;
		f=0;
		exprt(0);
		if(f==1)cout<<"Possible\n";
		else
			cout<<"Impossible\n";

	}

	return 0;
}
