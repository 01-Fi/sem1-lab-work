//to find the week day using switch case.
#include<stdio.h>
int main ()
{
	int n;
	printf("ENTER ANY INTEGER (RANGE:1-7):\n");
	scanf("%d",&n);
	switch (n)
	{case 1 : printf("MONDAY");
	break;
	case 2 : printf("TUESDAY");
	break;
	case 3 : printf("WEDNESDAY");
	break;
	case 4 : printf("THURSDAY");
	break;
	case 5 : printf("FRIDAY");
	break;
	case 6 : printf("SATURDAY");
	break;
	case 7 : printf("SUNDAY");
	break;
	default:
		printf ("INVALID INPUT");

	
	
	}
}
