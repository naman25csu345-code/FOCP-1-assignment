#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Step 2: Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Step 3: Compare with original number
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
