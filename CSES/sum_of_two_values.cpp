#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i=0; i<n; i++)
    {
        if (x%2==0 && a[i]==(x/2))
        {
            if (mp[a[i]]!=0)
            {
                cout << mp[a[i]] << " " << (i+1);
                return 0;
            }
            else
            {
                mp[a[i]]=(i+1);
            }
        }
        else
        {
            mp[a[i]]=(i+1);
            if (mp[x-a[i]]!=0)
            {
                cout << mp[x-a[i]] << " " << mp[a[i]];
                return 0;
            }
        }
        
    }
    cout << "IMPOSSIBLE";
}

