#include <stdio.h>
main() {
	int i,j,cnt=0;
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
				printf("%d,%d\n",i,j);
				cnt++;
		}
		
	}
	printf("cnt = %d",cnt);

}