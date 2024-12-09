#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
 
bool ispossible(ll x, int t, vi& a)
{
	ll sum =0;
	for (int time: a)
	{
		sum+=(x/time);
		if (sum>=t)
		{
			return true;
		}
	}
	return false;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	vector<int> x(n);
	for (int i=0; i<n; i++)
	{
		cin >> x[i];
	}
	ll l = 0;
	ll r = 1e18;
	ll ans = 1e18;
	while (l<=r)
	{
		ll mid = (l+r)/2;
		if (ispossible(mid,t,x))
		{
			r=mid-1;
			ans=min(ans,mid);
		}
		else
		{
			l=mid+1;
		}
	}
	cout << ans << "\n";
}
