#include <stdio.h>

int main() {
    int ages[8], i, min;

    for(i = 0; i < 8; i++) {
        printf("Enter age of participant %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    min = ages[0];
    for(i = 1; i < 8; i++) {
        if(ages[i] < min) {
            min = ages[i];
        }
    }

    printf("The youngest participant's age is: %d\n", min);
    return 0;
}
