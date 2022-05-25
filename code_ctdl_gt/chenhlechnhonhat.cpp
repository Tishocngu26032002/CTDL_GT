#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1, a+r+1);
	int i=0, j=0;
	while (i<x.size() && j<y.size()){
		if (x[i]<=y[j]){
			a[l]=x[i];
			l++;
			i++;
		}
		else {
			a[l]=y[j];
			j++;
			l++;
		}
	}
	while (i<x.size()){
		a[l]=x[i];
		i++;
		l++;
	}
	while (j<y.size()){
		a[l]=y[j];
		j++;
		l++;
	}
}

void mergesort(int a[], int l, int r){
	if (l>=r) return;
	int m=(l+r)/2;
	mergesort(a, l, m);
	mergesort(a, m+1, r);
	merge(a, l, m, r);
}

int main(){
	int t;
	cin>>t;
	while (t--){
		int min=INT_MAX;
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++) 
			cin>>a[i];
		mergesort(a, 0, n-1);
		int i=0;
		while (i<n-1){
			if (abs(a[i]-a[i+1])<min) min=abs(a[i]-a[i+1]);
			i++;
		}
		cout<<min<<endl;
	}
}
