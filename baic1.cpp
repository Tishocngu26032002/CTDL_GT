#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long a,b;
		long long ucln, bcnn;
		scanf("%d %d", &a,&b);
		bcnn=a*b;
		if (a<1 || b<1) {
			printf("Nhap sai\n");
		}
		else{
			int tmp;
			while (b != 0){
				tmp=a%b;
				a=b;
				b=tmp;
			}
			ucln=a;
			bcnn= bcnn/ucln;
			printf("%lld %lld\n", bcnn, ucln);
		}
	}
}
