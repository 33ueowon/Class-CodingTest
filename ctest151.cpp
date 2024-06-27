#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	long long int r;
	printf("a ===> ");
	scanf("%d", &a);
	printf("b ===> ");
	scanf("%d", &b);
	r = pow(a,b);
	printf("RESULT ===> %lld" , r);
	
}