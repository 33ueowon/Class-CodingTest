#include <stdio.h>
int main(){
	int m1,m2,cl = 0;
	printf("Menu1 ==> ");
	scanf("%d",&m1);
	printf("Menu2 ==> ");
	scanf("%d",&m2);
	if(m1 == 1 )	cl = cl + 400;
	else if(m1 == 2) cl = cl + 340;
	else if(m1 == 3) cl = cl + 170;
	else if(m1 == 4) cl = cl + 100;
	else if(m1 == 5) cl = cl + 70;
	if(m2 == 1 )	cl = cl + 400;
	else if(m1 == 2) cl = cl + 340;
	else if(m1 == 3) cl = cl + 170;
	else if(m1 == 4) cl = cl + 100;
	else if(m1 == 5) cl = cl + 70;
	if(cl <= 500)	printf("no angry");
	else printf("angry");
}
