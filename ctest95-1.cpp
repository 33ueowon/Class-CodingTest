#include <stdio.h>
main() {
	int i,n,min = 11,num;
	scanf("%d",&n);
	for(i = 0; i <= n; i++){
		scanf("%d",&num);
		if(min > num) min = num;
	}
		printf("* MIN = %d",min);
}