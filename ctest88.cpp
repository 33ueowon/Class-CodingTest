#include <stdio.h>
main() {
	int i,n;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		if(i%3!=0){
			printf("%2d\t",i);
		}
	}
}