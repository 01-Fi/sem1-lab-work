//to get a 5 digit no and print a new number adding 1 to each digit
#include<stdio.h>

int main() {
	int n, count= 0, digit, num= 0, place=1;
	printf("enter 5 digit no. :");
	scanf("%d",&n);
	

		while(n>0) {
			digit = n%10;
			digit = digit+1;
			num = digit * place + num;
			place = place*10;
			n = n/10;
		}
		printf("new number = %d",num);
	
	
}
