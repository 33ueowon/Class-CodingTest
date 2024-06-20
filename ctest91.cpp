#include <stdio.h>
main() {
	int day = 1,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while(day%a!=0||day%b!=0||day%c!=0){
		day++;
	}
	printf("*result = %d",day);		//등차수열 구하는 방식
	
}