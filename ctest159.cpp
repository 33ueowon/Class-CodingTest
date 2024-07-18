#include <stdio.h>

int main() {
    int ln[5],bn,mn[6],cn=0,b,c,max,bc=0,i,j;
    printf("LOTTO NUMBER(6) ===> ");
    for(i = 0; i<=5;i++){
    	scanf("%d",&ln[i]);
	}
	printf("BONUS NUMBER(6)");
	scanf("%d",&bn);
	printf("BONUS NUMBER(1) ===> ");
    for(i = 0; i<=5;i++){
    	scanf("%d",&mn[i]);
	}
    for(j = 0; j<5;j++){
    	for(i=0;i=5;i++){
    		if(ln[j]==mn[i]){
    			cn++;break;
			}
		}
	}
	switch(cn){
		case 6: printf("1");break;
		case 5: for(i=0;i<5;i++){
			if(mn[i]==bn) bc=1;
		}
		if(bc==1){
			printf("2");break;
		} else{
			printf("3");break;
		}
		case 4: printf("4");break;
		case 3: printf("3");break;
		default: printf("0");
	}
}