#include <stdio.h>
main(){
	int a;
replay:
	scanf("%d",&a);
	if(a!=0){
		printf("%d\n",a);
		goto replay;
	}
}