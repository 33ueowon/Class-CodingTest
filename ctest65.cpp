#include <stdio.h>
main(){
	int a,b,c;
	printf("*a=");
	scanf("%d",&a);
	printf("*b=");
	scanf("%d",&b);
	printf("*c=");
	scanf("%d",&c);
	if(a%2==0){
		printf("* EVEN = %d\n",a);
	}
	if(b%2==0){
		printf("* EVEN = %d\n",b);
	}
	if(c%2==0){
		printf("* EVEN = %d",c);
	}
}