//#include "stdafx.h"
#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int t,n,h,f=0;
string s;
bool take[20];
vector<string>v;
void num(int indx,int one){
	if(indx==n){
		if(one==h)
		 v.push_back(s);
 
	}
 
	else{
	    	s+='0';
			num(indx+1,one);
			s.pop_back();
 
			if(one<h){
			s+='1';
			num(indx+1,one+1);
			s.pop_back();
		}
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	cin>>t;
	for(int j=1;j<=t;j++){
		if(j!=1)
		cout<<"\n";
		cin>>n>>h;
		num(0,0);
 
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<"\n";
		v.clear();
 
	}
 
	return 0;
}
