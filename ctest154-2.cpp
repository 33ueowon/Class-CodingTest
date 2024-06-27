#include <stdio.h>
int main(){
	int m1,m2,cl = 0;
	int menu[]={400,340,170,100,70};
	printf("Menu1 ==> ");
	scanf("%d",&m1);
	printf("Menu2 ==> ");
	scanf("%d",&m2);
	cl = menu[m1-1] + menu[m2-1];
	if(cl <= 500)	printf("no angry");
	else printf("angry");
}
