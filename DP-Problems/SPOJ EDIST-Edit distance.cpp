#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
int mem[2000][2000];
string s,s2;
int gen(int i,int j)
{
//	if(i==-1||j==-1)return 1;
	if(i==-1)return j+1;
	if(j==-1)return i+1;
	if(mem[i][j]!=-1)return mem[i][j];
	int ret=gen(i-1,j-1)+(s[i]!=s2[j]);
	ret=min(ret,min(gen(i-1,j)+1,gen(i,j-1)+1));
	return mem[i][j]=ret;
}
int main() {
	int t;cin>>t;
	while(t--)
	{
		cin>>s>>s2;
		memset(mem,-1,sizeof mem);
		cout<<gen(s.size()-1,s2.size()-1)<<"\n";
	}
} 
