// mergesort.cpp : Defines the entry point for the console application.
//
#include <bits/stdc++.h>
//#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int rx[1001][1001],w,h,n,c=0;

int main()
{
    int x1,y1,x2,y2;

	while(cin>>w>>h>>n){
     if(w==0&&h==0&&n==0)
        break;
    else
    {
	memset(rx,0,sizeof rx);
	for(int a=1;a<=n;a++)
    {
        cin>>x1>>y1>>x2>>y2;
        for(int i=min(x1,x2)-1;i<max(x1,x2);i++){
         for(int j=min(y1,y2)-1;j<max(y1,y2);j++)
            rx[i][j]=1;
       }

    }

	for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(rx[i][j]==0)
                c++;
        }
    }
    if(c==0)
        cout<<"There is no empty spots.\n";
    else if(c==1)
        cout<<"There is one empty spot.\n";
    else
        cout<<"There are "<<c<<" empty spots.\n";
        c=0;
    }
 }





	return 0;
}
