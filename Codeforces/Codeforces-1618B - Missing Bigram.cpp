#include <bits/stdc++.h>
#define  ll long long
using namespace std;


int main()
{
    int test; cin >> test;
    while (test--)
    {
        int n; cin >> n;
        vector<string>a(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> a[i];
        }
        string ans = "";
        if (n == 3)
        {
            cout << 'b' << a[0] << "\n";
            continue;
        }
        for (int i = 0; i < n - 3; i++)
        {
            if (a[i][1] == a[i + 1][0])
            {
                ans.push_back(a[i][0]);
            }
            else
            {
                ans.push_back(a[i][0]);
                ans.push_back(a[i][1]);
            }
        }
        
            ans.push_back(a[n-3][0]);
           ans.push_back(a[n-3][1]);
           if (ans.size() != n)ans.push_back('a');
        
        cout << ans << "\n";
       
    }

}
