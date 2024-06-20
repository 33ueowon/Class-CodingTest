#include <stdio.h>
main() {
	int h,b,n;
	scanf("%d%d%d" , &h,&b,&n);
	if(n<10){
		printf("HNo = %d%d0%d",h,b,n);
	}else{
		printf("HNo = %d%d%d",h,b,n);
	}
}
