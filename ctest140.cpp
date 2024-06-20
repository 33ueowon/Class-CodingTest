#include <stdio.h>
main() {
	int y,s;
	scanf("%d%d" , &y,&s);
	if(s==1||s==2){
		printf("YEAR = %d",25+100-y/10000);
	}else{
		printf("YEAR = %d",25-(y/10000));
	}
}
