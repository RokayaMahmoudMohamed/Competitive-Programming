// erasing from multiset
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
bool ok(vector<int> v)
{
    int st = 0, en = v.size() - 1;
    while (st < en)
    {
        if (v[st] != v[en])return false;
        st++, en--;
    }
    return true;
}

int main()
{
    int test; cin >> test;
    while (test--)
    {
        int n; cin >> n;
        vector<int>a(n),v1,v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, j = n - 1;
        
        while (i < j)
        {

            if (a[i] != a[j])
            {
                
                for (int l = 0; l < n; l++)
                {
                    if (a[l] != a[i])v1.push_back(a[l]);
                    if (a[l] != a[j])v2.push_back(a[l]);

                }

                break;
            }

            i++, j--;

        }
        
        cout << ((ok(v1) || ok(v2)) ? "YES\n" : "NO\n");



    }


}
