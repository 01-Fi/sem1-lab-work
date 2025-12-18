//find no of elemnt in array
#include <stdio.h>
int main() {
    int arr[100],count = 0,i; 
    printf("Enter elements (enter -1 to stop):\n");

    for (i = 0; i < 100; i++) {
        scanf("%d",&arr[i]);
        if (arr[i] == -1) {
            break;
        }
        count++;
    }

    printf("Number of elements entered: %d\n", count);
}

