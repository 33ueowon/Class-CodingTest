#include <stdio.h>
main() {
	int i,n;
	scanf("%x",&n);
	for(i=1;i<=15;i++){
		printf("%2x * %2x = %2x\n",n,i,n*i);	
	}


}