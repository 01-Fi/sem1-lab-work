#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER TWO INTEGER:\n");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n", a , b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("VALUES OF a and b AFTER SWAP \n");
    printf("a=%d and b=%d", a , b);
    return 0;
}
