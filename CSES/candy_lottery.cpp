#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
 
ld binpow(ld b, int n){
	ld ans=1;
	while (n>0)
	{
		if ((n&1)==1)
		{
			ans=ans*b;
		}
		b=b*b;
		n=n>>1;
	}
	return ans;
}
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	ld k;
	cin >> n >> k;
	ld sum=k;
	for (int i=1; i<k; i++)
	{
		sum-=binpow((i/k),(n));
	}
	sum*=1e6;
	int s= round(sum);
	if (s%2==0)
	{
		cout << setprecision(6) << fixed << s/1e6;
	}
	else
	{
		if (abs(abs(sum-s)-0.5)<=1e-9)
		{
			cout << setprecision(6) << fixed << (s-1)/1e6;
		}
		else
		{
			cout << setprecision(6) << fixed << s/1e6;
		}
	}
}
