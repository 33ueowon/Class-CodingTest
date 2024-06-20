#include <stdio.h>
main(){
	int n,m;
	scanf("%d",&n);
replay:
	scanf("%d",&m);
	printf("%d\n",m);
	if(--n!=0)goto replay;
}