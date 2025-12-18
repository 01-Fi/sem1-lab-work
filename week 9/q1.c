//rhombus number pattern
#include<stdio.h>
#define N 5
int main(){
	int i,j,k;
	printf("PATTERN:-\n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
	for(i=1;i<=N-1;i++){
		for (j=1;j<=i;j++){
			printf(" ");
		}
		for(k=1;k<=N-i;k++){
			printf("%d ",k);
		}
		printf("\n");   
	}
	
}

