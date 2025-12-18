//fibonacci series
#include<stdio.h>
int main(){
	int i, t1=0, t2=1,nt,n;
	printf("ENTER THE  NUMBER OF TERMS:");
	scanf("%d",&n);
	
	printf("THE FIBONACCI SERIES :\n");
	
	for(i=1; i<=n; i++){
		printf("%d  ",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
}

