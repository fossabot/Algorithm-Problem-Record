#include<bits/stdc++.h> 
using namespace std;
int n,m;
const int N=1010;
int f[N][N],w[N],v[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
	for(int i=1;i<=n;i++)
	    for(int j=0;j<=m;j++)
	    {
	    	f[i][j]=f[i-1][j];
	    	if(v[i]<=j) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
    cout<<f[n][m]<<endl;
	return 0;		
}
