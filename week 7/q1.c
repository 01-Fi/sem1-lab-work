//to check leap year
#include<stdio.h>
main(){
	int year;
	printf("ENTER YEAR:\n");
	scanf("%d",&year);
	
	if (year%400==0||year%4==0&&year%100!=0)
	    printf("ITS A LEAP YEAR!");
	
	else
		printf("ITS NOT A LEAP YEAR!");
	
}
