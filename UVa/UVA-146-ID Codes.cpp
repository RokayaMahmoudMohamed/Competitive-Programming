#include <bits/stdc++.h>
#include<iostream>
using namespace std;

/* Function to swap two characters */
void swap(char& a, char& b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

void permutation(string s,int i,int n)
{
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = i; j < s.length(); j++)
        {

            swap(s[i],s[j]);
        }
    }
}
string s;
int main()
{
   while(cin>>s){
    if(s=="#")
        break;
    else{
    int n=s.size();
    if(next_permutation(s.begin(),s.end())==1){
    permutation(s,0,n);
    cout<<s<<"\n";
    }
    else
    cout<<"No Successor\n";
    n=0;
    }
   }
}
