#include <stdio.h>
main() {
	int a,b,c;
	scanf("%d%d%d" , &a,&b,&c);
	if(a<c && a<b){
		if(b<c){
			printf("MID = %d",b);
		}else{
			printf("MID = %d",c); 
		} 
	}
	else if(b < a && b < c){
		if(a<c){
			printf("MID = %d",a);
		}else{
			printf("MID = %d",c); 
		}
	}
	else if(a<b){
			printf("MID = %d",a);
		}else{
			printf("MID = %d",b); 
		}
}
