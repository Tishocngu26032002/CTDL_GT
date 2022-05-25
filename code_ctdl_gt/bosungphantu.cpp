#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		long n, max=LONG_MIN, min=LONG_MAX;
		cin>>n;
		set<long> s;
		for (long i=0;i<n;i++){
			long x;
			cin>>x;
			s.insert(x);
			if (x>max) max=x;
			if (x<min) min=x;
		}
		long tg=max-min+1;
		cout<<tg-s.size()<<endl;
	}
}
