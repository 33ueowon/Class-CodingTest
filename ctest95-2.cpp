#include <stdio.h>
main() {
	int i,n,min,num;
	scanf("%d",&n);
	scanf("%d",&num);
	for(i = 1; i < n; i++){
		scanf("%d",&num);
		if(min > num) min = num;
	}
		printf("* MIN = %d",min);
}