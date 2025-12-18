//func for fibonacci series
#include<stdio.h>
int fibonacci(int n){
	int i,a=0,b=1,c;
	for(i=1;i<=n;i++){
		if(i==1)
		    printf("%d\t",a);
		else if (i==2)
		    printf("%d\t",b);
		else{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
	}
}
int main(){
	int n;
	printf("ENTER NUMBER OF TERMS:\n");
	scanf("%d",&n);
	
	fibonacci(n);
	
}
