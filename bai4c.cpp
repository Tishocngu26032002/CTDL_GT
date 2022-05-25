#include <stdio.h>
#include <math.h>

int kt(long long a){
	if (a<2) return 0;
	for (int i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	long long a[102];
	long long nho=0;
	for (int i=0;i<n;i++) scanf("%lld",&a[i]);
	for (int i=0;i<n;i++){
		if (kt(a[i])==1)  {
			printf("%lld ", a[i]);
			nho++;
		}
	}
	if (nho=0) printf("0");
}
