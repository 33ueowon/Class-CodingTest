#include <stdio.h>
main(){
	int a;
	printf("a = ");
	scanf("%d",&a);
	
	if(a<=39){
		printf("D");
	}
	else if(a<=69){
		printf("C");
	}
	else if(a<=89){
		printf("B");
	}
	else{
		printf("A");
	}
}