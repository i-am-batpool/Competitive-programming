#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
 
bool ispossible(ll cap, int k, vi& a)
{
	ll curr =0;
	int workersass=0;
	for (int work: a)
	{
		if ((curr+work)<=cap)
		{
			curr+=work;
		}
		else
		{
			if (workersass==(k-1))
			{
				return false;
			}
			else if (work<=cap)
			{
				curr=work;
				workersass++;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vi x(n);
	for (int i=0; i<n; i++)
	{
		cin >> x[i];
	}
	ll l = 0;
	ll r = 2*(1e14);
	ll ans = r;
	while (l<=r)
	{
		ll mid = (l+r)/2;
		if (ispossible(mid, k, x))
		{
			ans=min(ans,mid);
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout << ans << "\n";
}
