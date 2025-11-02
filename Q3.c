#include <stdio.h>

// Function to add two numbers using bitwise operators
int bitwiseAdd(int a, int b) {
    while (b != 0) {
        int carry = a & b;   // Find carry bits
        a = a ^ b;           // Sum without carry
        b = carry << 1;      // Shift carry left
    }
    return a;
}

// Function to subtract using bitwise logic
int bitwiseSubtract(int a, int b) {
    // Subtraction: a - b = a + (~b + 1)
    return bitwiseAdd(a, bitwiseAdd(~b, 1));
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = bitwiseSubtract(num1, num2);

    printf("Result of %d - %d = %d\n", num1, num2, result);

    return 0;
}
