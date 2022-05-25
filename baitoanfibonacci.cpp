#include <bits/stdc++.h>
using namespace std;

long long fibo_array(int n){
	vector<long long> f;
	f.push_back(0);
	f.push_back(1);
	for (int i=2;i<=n;i++){
		long long next_fibo=f[i-1]+f[i-2];
		f.push_back(next_fibo);
	}
	return f[n];
}

long long fibo_dequy(int n){
	if (n<2) return n;
	return fibo_dequy(n-1)+fibo_dequy(n-2);
}

int main(){
	cout<<fibo_array(40);
//	cout<<fibo_dequy(n);0
}
