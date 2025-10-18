#include <stdio.h>

int main() {
    int arr[10], i, isSorted = 1;

    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 9; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}
