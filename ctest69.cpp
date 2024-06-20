#include <stdio.h>
main(){
	char a;
	printf("*jumsu = ");
	scanf("%c",&a);
	
	switch(a){
		case 'A':printf("Best");break;
		case 'B':printf("Good");break;
		case 'C':printf("Run");break;
		case 'D':printf("slowly");break;
		default: printf("What?");
	}
	
}