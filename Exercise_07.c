#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int digits[100], i, j = 0, sum = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    for(i = 0; text[i] != '\0'; i++) {
        if(isdigit(text[i])) {
            digits[j] = text[i] - '0';
            sum += digits[j];
            j++;
        }
    }

    printf("Extracted digits: ");
    for(i = 0; i < j; i++) {
        printf("%d ", digits[i]);
    }

    printf("\nSum of digits: %d\n", sum);
    return 0;
}
