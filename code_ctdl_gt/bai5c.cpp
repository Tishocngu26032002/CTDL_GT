#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long a[1002];
	for (int i=0;i<n;i++) scanf("%lld", &a[i]);
	int dem=0;
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++){
			int tmp, x=a[i], y=a[j];
			while (y!=0){
				tmp=x%y;
				x=y;
				y=tmp;
			}
			if (x==1) dem++;
		}
	printf("%d", dem);
}
