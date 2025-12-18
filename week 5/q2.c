/*prog to find si and ci */
/*priciple, rate, time taken from user*/
#include<stdio.h>
#include<math.h> /*to calculate si n ci we need math func.*/
int main(){
    float p,r,t;
/*taking input from user*/
    printf("ENTER VALUE OF PRINCIPLE:");
    scanf("%f", &p);
    printf("ENTER VALUE OF RATE:");
    scanf("%f", &r);
    printf("ENTER VALUE OF TIME:");
    scanf("%f", &t);
    float si= (p*r*t)/100;  /*si formula*/
    float ci=p*(pow((1+r/100),t)-1); /*ci formula*/
    printf("SIMPLE INTEREST=%f\nCOMPOUND INTEREST=%f",si,ci);
    
    return 0;
}