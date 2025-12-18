#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER TWO INTEGER:\n");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n", a , b);
    c=a;
    a=b;
    b=c;
    printf("VALUES OF a and b AFTER SWAP \n");
    printf("a=%d and b=%d", a , b);
    return 0;
}

