#include <stdio.h>
main(){
	int a,b,c;
	printf("*a=");
	scanf("%d",&a);
	printf("*b=");
	scanf("%d",&b);
	printf("*c=");
	scanf("%d",&c);
	printf("* MIN = %d",a<b?a:b,b<c?b:c,c<a?c:a);
	
}