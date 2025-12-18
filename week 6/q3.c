//to find all Armstrong Number in the range of 0 and 999.
#include<stdio.h>
#include<math.h>
main()
{
	int i,d1,d2,d3;
	printf("THE ARMSTRONG NUMBERS BETWEEN 0 AND 999 are:\n");
	
	for(i=0; i<=999; i++){
		d1=i/100;
		d2=(i/10)%10;
		d3=i%10;
		
	    if(i==(pow(d1,3)+pow(d2,3)+pow(d3,3))){
		printf("%d\n",i);
    	}
	}
}
