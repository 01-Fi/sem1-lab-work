//prime number list in range
#include<stdio.h>
int main() {
	
	int n, m, i, j;
	printf("enter a range :");
	scanf("%d%d",&n,&m);
	
	for (j=n; j<=m; j++) {
	    for(i=2; i<=m/2; i++) {
        	if( j%i == 0) 
		        break;
    	}
    	if (i > j/2)
	        printf("%d \n",j);
    }
	
	
}

