#include <stdio.h>
int main(){
	int m1,m2,cl = 0;
	printf("Menu1 ==> ");
	scanf("%d",&m1);
	printf("Menu2 ==> ");
	scanf("%d",&m2);
	if(m1 == 1 || m2 == 1){
		cl = cl + 400;
		if(m1 == 1 && m2 == 1) cl = cl + 400;
	}
	if(m1 == 2 || m2 == 2){
		cl = cl + 400;
		if(m1 == 2 && m2 == 2) cl = cl + 400;
	}
	if(m1 == 3 || m2 == 3){
		cl = cl + 400;
		if(m1 == 3 && m2 == 3) cl = cl + 400;
	}
	if(m1 == 4 || m2 == 4){
		cl = cl + 400;
		if(m1 == 4 && m2 == 4) cl = cl + 400;
	}
	if(m1 == 5 || m2 == 5){
		cl = cl + 400;
		if(m1 == 5 && m2 == 5) cl = cl + 400;
	}
	if(cl <= 500)	printf("no angry");
	else printf("angry");
}
