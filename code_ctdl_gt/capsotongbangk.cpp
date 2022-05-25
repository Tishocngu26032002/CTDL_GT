#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		long n, sum;
		cin>>n>>sum;
		map<long, long> m;
		long a[n];
		for (long i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;		
		}
		long dem=0;
		for (long i=0;i<n;i++){
			dem+=m[sum-a[i]];
			if (sum-a[i]==a[i]){
				dem--;
			}
		}
		cout<<dem/2<<endl;
	}
	return 0;
}
