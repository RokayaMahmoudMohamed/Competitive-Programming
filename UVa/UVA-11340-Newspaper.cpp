// mohamed.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int n,m,k;
double sum=0.0;
string s;
int main()
{
	
	pair <char,int> rx[1000];
	cin>>n;
	for(int a=1;a<=n;a++){
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>rx[i].first>>rx[i].second;
		}
		cin>>m;
		for(int i=0;i<=m;i++){
			//cin.ignore();
			getline(cin,s);
			for(int v=0;v<(int)s.size();v++){
			for(int j=0;j<k;j++){
				if(s[v]==rx[j].first)
					sum+=rx[j].second;
			}
		}
		}
		cout.precision(2);
		cout<<fixed<<sum/100<<"$\n";
			memset(rx,0,sizeof (rx));
			sum=0;
	}
	return 0;
	
	
}
