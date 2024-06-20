#include <stdio.h>
main() {
	int i=1,n,sum=0;
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0)sum+=i;
		i++;
	}
	printf("sum = %d",sum);
}