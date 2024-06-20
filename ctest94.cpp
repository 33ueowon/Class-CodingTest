#include <stdio.h>
main() {
	int i,n,num;
	scanf("%d",&n);
	int hak[n];
	for(i = 0; i <= n; i++){
		scanf("%d",&hak[i]);
	}
	for(i = 1; i >= 1; i--){
		printf("* %2d = 2d\n",i,hak[i]);
	}
}