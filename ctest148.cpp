#include <stdio.h>
int main(){
	int jumsu,p;
	printf("jumsu(1~100) ===> ");
	scanf("%d", &jumsu);
	p = jumsu / 10;
	switch(p){
		case 10: printf("A");
				break;
		case 9: printf("A");
				break;
		case 8: printf("B");
				break;
		case 7: printf("C");
				break;
		case 6: printf("D");
				break;
		default: printf("E");
	}
	
}