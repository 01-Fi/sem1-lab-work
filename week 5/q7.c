//to check vowel or consonent // 
#include<stdio.h>
int main(){
    char alph;
    printf("ENTER ANY ALPHABET:\n");
    scanf("%c",&alph);
        if (alph=='a'|| alph=='e' || alph=='i' || alph=='o' || alph=='u' || alph=='A' || alph=='E' || alph=='I' || alph=='O' || alph=='U')
        {printf("ENTERED ALPHABET IS VOWEL");}
  
        else{
        printf("ENTERED ALPHABET IS CONSONENT");}
        return 0;
}
    
    
    