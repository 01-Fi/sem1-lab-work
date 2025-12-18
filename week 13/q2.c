//to compute factorial using recursion
#include<stdio.h>
int fact(int n){
	if(n==0){
		return 1;
	}
	return(n*fact(n-1));
}
main(){
	int num;
	printf("ENTER A POSITIVE NUMBER:");
	scanf("%d",&num);
	printf("FACTORIAL OF %d=%d",num,fact(num));
}
 
