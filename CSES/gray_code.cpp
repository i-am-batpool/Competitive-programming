#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int nitems = 1<<n;
    vector<vector<int>> matrix(nitems, vector<int>(n));
    for (int i=1; i<nitems+1; i++)
    {
        for (int j=1; j<n+1; j++)
        {
            int y = 1<<(n-j);
            int p = (i+y-1)/y;
            if (p%4==1 || p%4==0)
            {
                matrix[i-1][j-1]=0;
            }
            else{
                matrix[i-1][j-1]=1;
            }
        }
    }
    for (int i=0; i<nitems; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << matrix[i][j];
        }
        cout << "\n";
    }
}

