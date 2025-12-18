//to find largest element of a given array
#include<stdio.h>
main(){
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter %d elements of array:\n", n);
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for( i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element is %d\n", largest);
   

}
