//to convert string from upper to lower and lower to upper
#include<stdio.h>
main(){
	int i;
	char str[100];
	printf("ENTER A STRING:\n");
	fgets(str,sizeof(str),stdin);
	for(i=0; str[i]!=0; i++){
		if('A'<=str[i] && str[i]<='Z'){
			
			str[i]+=32;
			
		}
		else if('a'<=str[i]&& str[i]<='z'){
			str[i]-=32;
		}       	
	}
	printf("converted string is:%s",str);
}
