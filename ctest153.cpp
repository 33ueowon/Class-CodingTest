#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,d,cn = 0;
	printf("a ===> ");
	scanf("%d", &a);
	printf("b ===> ");
	scanf("%d", &b);
	printf("c ===> ");
	scanf("%d", &c);
	printf("d ===> ");
	scanf("%d", &d);
	if(a==1)cn++;
	if(b==1)cn++;
	if(c==1)cn++;
	if(d==1)cn++;
	if(cn == 0)printf("RESULT ==> 모");
	if(cn == 1)printf("RESULT ==>");
	if(cn == 2)printf("RESULT ==>");
	if(cn == 3)printf("RESULT ==>");
	if(cn == 4)printf("RESULT ==>");
	
}