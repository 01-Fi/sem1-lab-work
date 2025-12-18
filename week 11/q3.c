//structure to add two distances
#include <stdio.h>
struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inch);

    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch >= 12.0) {
        sum.inch = sum.inch - 12.0;
        sum.feet++;
    }
    printf("\nSum of distances = %d feet %.2f inches\n", sum.feet, sum.inch);

}

