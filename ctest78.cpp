#include <stdio.h>
main() {
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=2;i<=n;i+=2){
		sum+=i;
	}	printf("sum = %d",sum);
}