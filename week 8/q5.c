//LCM HCF
#include<stdio.h>

int main() {
	
	int n, m, a, b,rem;
	
	printf("enter two numbers :");
	scanf("%d%d",&n,&m);
	
	a=n;
	b=m;
	
	while (n%m != 0) {
		rem= n%m;
		n=m;
		m=rem;
		
	}
	printf("HCF = %d \n",m);
	
	int LCM = a*b/m;
	printf("LCM = %d",LCM);
	
}
