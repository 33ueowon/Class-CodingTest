#include <stdio.h>
main() {
	int i,n,min = 11;
	scanf("%d",&n);
	int hak[n];
	for(i = 0; i <= n; i++){
		scanf("%d",&hak[i]);
		if(min > hak[i]) min = hak[i];
	}
		printf("* MIN = %d",min);
}