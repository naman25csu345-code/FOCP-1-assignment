#include <stdio.h>
#include <math.h>


int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}


long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;
        binary += remainder * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    long long binaryInput;
    int decimalInput;

    printf("=== Number System Converter ===\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryInput);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binaryInput));
            break;

        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            printf("Binary equivalent: %lld\n", decimalToBinary(decimalInput));
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
