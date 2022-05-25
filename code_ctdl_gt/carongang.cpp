#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k){
	int a[n];
	for (int i=0;i<n;i++) a[i]=0;
	bool has_next = true;
	while (has_next){
		int demk=1, maxk=0, maxk1=0, demk1=1;
		for (int i=0;i<n;i++){
			if (a[i]==k && a[i]==a[i+1]) {
				demk++;
				if (demk>maxk) maxk=demk;
			}
			if (a[i]!=k && a[i]==a[i+1]) {
				demk1++;
				if (maxk1<demk1) maxk1=demk1;
			}
		}
		if (maxk>maxk1 && maxk>=5){
			for (int i=0;i<n;i++){
				if (a[i]==1) cout<<"X";
				else cout<<"O";
			}
			cout<<endl;
		}
		int i=n-1;
		while (i>=0 && a[i]==1){
			a[i]==0;
			i--;
		}
		if (i>=0){
			a[i]=1;
		}
		else has_next=false;
	}
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int k;
		if (s[0]=='X') k=1;
		else k=0;
		sinh(n,k);
	}
}
