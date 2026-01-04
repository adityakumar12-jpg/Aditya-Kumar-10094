#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    // Check only 3-digit numbers
    if (num < 100 || num > 999) {
        printf("Invalid input! Please enter a 3-digit number.\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        printf("Valid: It is an Armstrong number.\n");
    else
        printf("Invalid: It is not an Armstrong number.\n");

    return 0;
}
