#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;

    for(i = 0; i < 10; i++) {
        printf("Enter value for day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        if(arr[i] > 0) {
            sum += arr[i];
        }
    }

    printf("Total profit: %d\n", sum);
    return 0;
}
