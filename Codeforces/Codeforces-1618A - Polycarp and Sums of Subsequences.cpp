#include <bits/stdc++.h>
#define  ll long long
using namespace std;


int main()
{
    int test; cin >> test;
    while (test--)
    {
        vector<int>a(7),ans;
        for (int i = 0; i < 7; i++)cin >> a[i];
        ll sum = 0;
        for (int i = 0; i < 7; i++)
        {
            bool ok = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                for (int k = j - 1; k >= 0; k--)
                {
                    if (a[k] + a[j] == a[i])ok = 1;
                }
            }
            if (!ok) {
                ans.push_back(a[i]);
                sum += a[i];
            }
        }
        if(a[6]-sum!=0)
        ans.push_back(a[6] - sum);
        for (auto i : ans)cout << i << " ";
        cout << "\n";
        ans.clear();
       
    }

}
