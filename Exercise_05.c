#include <stdio.h>

int main() {
    int arr[12], i, j, num, newSize = 12;

    for(i = 0; i < 12; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number to remove: ");
    scanf("%d", &num);

    for(i = 0; i < newSize; i++) {
        if(arr[i] == num) {
            for(j = i; j < newSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newSize--;
            i--;
        }
    }

    printf("Array after removing %d:\n", num);
    for(i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
