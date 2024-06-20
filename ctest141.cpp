#include <stdio.h>
main() {
	int y;
	scanf("%d" , &y);
	if(y<=25){
		printf("YEAR = %d, 4",25-y);
	}else{
		printf("YEAR = %d, 2",100-y+25);
	}
}
