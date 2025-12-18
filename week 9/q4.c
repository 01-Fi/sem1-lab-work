//func to check prime or not
#include<stdio.h>
int prime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int num;
	printf("ENTER A NUMBER\n ");
	scanf("%d",&num);
	if(prime(num)==0){
		printf("NOT A PRIME NUMBER.");
	}
	else{
		printf("PRIME NUMBER.");
	}
}
