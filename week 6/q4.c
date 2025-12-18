//to check palindrome
#include<stdio.h>
#include<math.h>
main(){
	int num,og,rev,rem;
	printf("ENTER A PALINDROME:\n");
	scanf("%d",&num);
	og=num;
	
	while (num>0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(og==rev){
		printf("THE NUMBER IS A PALINDROME.\n");
	}
	else{
		printf("THE NUMBER IS NOT A PALINDROME.\n");
	}
}

