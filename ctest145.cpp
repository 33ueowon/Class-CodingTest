#include <stdio.h>
main() {
	int h,m;
	printf("H ===> ");
	scanf("%d", &h);
	printf("M ===> ");
	scanf("%d", &m);
	if(m<30){
		if(h==0)h=24;
		h=h-1;
		m=m+30;
	}else m=m-30;
	printf("H = %d, M = %d",h,m);
}
