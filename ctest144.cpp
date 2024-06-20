#include <stdio.h>
main() {
	int n,i,j,temp;
	printf("N ===> ");
	scanf("%d" , &n);
	int data[n+1];
	printf("DATA ===> ");
	for(i=1;i<=n;i++){
		scanf("%d",&data[i]);
	}
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(data[i]>data[j]){
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("SORT ===> ");
	for(i=1;i<=n;i++){
		printf("%3d",data[i]);
	}
}
