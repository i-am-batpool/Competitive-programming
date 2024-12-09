#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
 
bool ispossible(ll x, ll n, ll comp)
{
	ll sum=0;
	for (int i=1; i<=n; i++)
	{
		if ((x/i)>n)
		{
			sum+=n;
		}
		else
		{
			sum+=(x/i);
		}
	}
	if (sum>=comp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll l = 0;
	ll r = 1e12;
	ll ans = 1e12;
	ll comp = 1+((n*n)/2);
	while (l<=r)
	{
		ll mid = (l+r)/2;
		if (ispossible(mid,n,comp))
		{
			ans = min(ans,mid);
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout << ans << "\n";
}
