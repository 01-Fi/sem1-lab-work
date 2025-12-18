//to return even num from array
#include <stdio.h>
int countEven(int *arr, int size) {
    int count = 0,i;
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = countEven(arr, n);

    printf("Number of even elements: %d\n", evenCount);

    return 0;
}

