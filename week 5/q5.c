/*to find area and perimeter of diff shapes*/
#include<stdio.h>
#include<math.h>
int main() {
    int s1,s2,s3;
    float pi=3.14;
    printf("ENTER VALUE OF LENGTH AND BREADTH OF RECTANGLE:\n");
    scanf("%d",&s1); scanf("%d",&s2);
    printf("AREA OF RECTANGLE IS =%d\n",s1*s2);
    printf("PERIMETER OF RECTANGLE IS=%d\n",2*(s1+s2)); 
    printf("ENTER VALUE OF RADIUS OF CIRCLE:\n");
    scanf("%d",&s1);
    printf("AREA OF CIRCLE IS =%f\n",pi*s1*s1);
    printf("PERIMETER OF CIRCLE IS=%f\n",2*pi*s1);
    printf("ENTER VALUE OF ALL THREE SIDES OF TRIANGE:\n");
    scanf("%d",&s1); scanf("%d",&s2); scanf("%d",&s3);
    printf("AREA OF TRIANGE IS =%f\n",0.5*s1*s1);
    printf("PERIMETER OF TRIANGE IS=%d\n",s1+s2+s3);
    printf("ENTER VALUE OF SIDE OF CUBE:\n");
    scanf("%d",&s1);
    printf("TOTAL SURFACE AREA OF CUBE IS =%d\n",6*s1*s1);
    printf("PERIMETER OF CUBE IS=%d\n",12*s1);

    return 0;
}