#include <stdio.h>
main() {
	int i,j,cnt=0,n,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
				printf("%d,%d\n",i,j);
				cnt++;
		}
		
	}
	printf("cnt = %d",cnt);

}