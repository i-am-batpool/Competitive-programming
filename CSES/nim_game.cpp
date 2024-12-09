#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	for (int itt=0; itt<t; itt++)
	{
		int n;
		cin >> n;
		int x=0;
		for (int i=0; i<n; i++)
		{
			int in;
			cin >> in;
			x=x^in;
		}
		if (x==0)
		{
			cout << "second\n";
		}
		else
		{
			cout << "first\n";
		}
	}
}

