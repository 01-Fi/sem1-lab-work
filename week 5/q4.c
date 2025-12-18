//to check the type of triangle//
#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER THE THREE SIDES OF A TRIANGLE:\n");
    scanf("%d",&a), scanf("%d",&b), scanf("%d",&c);
    if(a>b+c || b>a+c || c>a+b){
        printf("NO TRIANGLE IS FORMED");
    }
    else if (a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c==(b*b+a*a) ){
        printf("RIGHT ANGLED TRIANGLE IS FORMED");
    }
    else if (a*a>(b*b+c*c) || b*b>(a*a+c*c) || c*c>(b*b+a*a)){
        printf("OBTUSE ANGLED TRIANGLE IS FORMED");
    }
    else if (a*a<(b*b+c*c) || b*b<(a*a+c*c) || c*c<(b*b+a*a)){
        printf("ACUTE ANGLED TRIANGLE IS FORMED");
    }
    
}
