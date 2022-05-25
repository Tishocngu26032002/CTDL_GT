#include <bits/stdc++.h>
using namespace std;

int best_value(int a[], int c[], int n, int v){
	int  dp[n+1][n+1]={0};
	for (int i=1;i<=n;i++){
		dp[i][0]=0;
		dp[i][0]=0;
	}
	cout<<endl;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=v;j++){
			dp[i][j]=max(dp[i-1][j], (a[i]<=j) ? c[i]+ dp[i-1][j-a[i]] : 0);
		}
	}
	return dp[n][v];
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,v;
		cin>>n>>v;
		int a[n+1],c[n+1];
		for (int i=1;i<=n;i++) cin>>a[i];
		for (int i=1;i<=n;i++) cin>>c[i];
		cout<<best_value(a,c,n,v);
	}
}
