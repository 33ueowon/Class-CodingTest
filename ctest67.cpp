#include <stdio.h>
main(){
	int a;
	printf("*a=");
	scanf("%d",&a);
	
	if(a<0){
		printf("* %d = MINUS - ",a);
		if(a%2==0){
			printf("even");
		}
		else{
			printf("odd");
		}
	}
	else{
		printf("* %d = PLUS - ",a);
		if(a%2==0){
			printf("even");
		}
		else{
			printf("odd");
		}
	}
}