//#include "stdafx.h"
#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
vector<int>ans;
int track,sum,mx,n,a[21];
void mus(int indx)
{
	if(indx==track)
	{
		if(sum<=n)
			if(sum>mx){
				mx=sum;
				ans=v;
			}
	}
	else{
		if(sum+a[indx]<=n){
		sum+=a[indx];
		v.push_back(a[indx]);
		mus(indx+1);
		sum-=a[indx];
		v.pop_back();
		}

		mus(indx+1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	while(cin>>n){
		cin>>track;
		for(int i=0;i<track;i++)
			cin>>a[i];
		mx=-1;
		mus(0);
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<"sum:"<<mx<<"\n";
	}
 
	return 0;
}
