//func for factorial
#include<stdio.h>
//func to calc factorial
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int n;
	printf("ENTER NUMBER:\n");
	scanf("%d",&n);
	printf("factorial= %d",factorial(n));

}


