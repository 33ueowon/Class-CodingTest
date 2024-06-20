#include <stdio.h>
main() {
	int hak[11] = {0},i,n,num;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		scanf("%d",&num);
		hak[num]++;
	}
	for(i = 1; i <= 10; i++){
		printf("* %2d = %2d\n",i,hak[i]);	
	}
}