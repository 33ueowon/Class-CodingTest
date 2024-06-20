#include <stdio.h>
main() {
	int a,m,d,n;
	scanf("%d%d%d",&a,&m,&d&n);
	for(i = 1; i < n; i++){
		a=a *= m+d;
	}
	printf("*result = %d",a);	//등차수열 구하는 방식
	
}