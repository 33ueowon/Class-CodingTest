#include<stdio.h>
main() {
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	
	if(a+b+c-max > max) printf("yes");
	else printf("no");
}