//to find factorial
#include<stdio.h>
main(){
	int n, i, fact=1;
	printf("ENETR A NON NEGETIVE NO. :\n");
	scanf("%d",&n);
	if(n<0){
		printf("YOU ENTERED A NEGETIVE NO.");
	}
	else{
		for(i=2;i<=n;i++)
		fact=fact*i;
	
	printf("%d!=%d",n,fact);
    }
}
