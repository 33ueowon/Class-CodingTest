#include <stdio.h>
main(){
	int a;
	printf("*month = ");
	scanf("%d",&a);
	
	switch(a){
		case 1: case 2: case 12: printf("Winter");	break;
		case 3: case 4: case 5 : printf("Spring");	break;
		case 6: case 7: case 8 : printf("Sumer");	break;
		case 9: case 10: case 11 : printf("fall");	break;
	}
//	case 'B':printf("Spring");break;
//		case 'C':printf("Sumer");break;
//		case 'D':printf("Fall");break;
//		default: printf("What?");
}