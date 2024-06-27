#include<stdio.h>
main() {
	int a, b, c;
	printf("A ==> ");
	scanf("%d",&a);
	printf("B ==> ");
	scanf("%d",&b);
	printf("C ==> ");
	scanf("%d",&c);
	if(a>b&&a>c){
		if(a+b+c) printf("yes");
		else printf("no");
	}else if(b>a&&b>c){
		if(a+b+c) printf("yes");
		else printf("no");
	}else if(c<a+b)
		printf("yes");
		else printf("no");
	
}