// reads non negetive integer and reverses and to sum of digits of anumber //
#include<stdio.h>
int main(){
	int n, lsd, sum=0, rev=0;
	printf("ENTER A NON NEGETIVE INTEGER:");
	scanf("%d",&n);
	if(n<0){
		printf("ERROR!\nENTER A NON NEGETIVE INTEGER");	}
	else{
		while (n!=0)
		{
			lsd=n%10;
	    	rev=rev*10+lsd;
	    	sum=sum+lsd;
	    	n=n/10;
			}
	    	printf("REVERSE NUMBER =%d\nSUM OF DIGITS=%d", rev, sum);
	    }
		
	
}

