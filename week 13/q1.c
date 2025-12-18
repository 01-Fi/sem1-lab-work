//to swap values using func
#include <stdio.h>
void swapValue(int a, int b) { 
    int t = a;
    a = b;
    b = t;
    printf("Inside swapValue: a=%d b=%d\n", a, b);
}
void swapRef(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void swapRefNoTemp(int *a, int *b) { 
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swapValue(x, y);  
    swapRef(&x, &y);
    printf("After swapRef: x=%d y=%d\n", x, y);
    swapRefNoTemp(&x, &y);
    printf("After swapRefNoTemp: x=%d y=%d\n", x, y);
}

