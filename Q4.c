#include <stdio.h>

// Method 1: Using a temporary variable
void swapUsingTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("\n[Method 1: Temporary Variable]");
    printf("\nAfter swap: a = %d, b = %d\n", a, b);
}

// Method 2: Using arithmetic operations (no third variable)
void swapUsingArithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n[Method 2: Arithmetic Operations]");
    printf("\nAfter swap: a = %d, b = %d\n", a, b);
}

// Method 3: Using bitwise XOR
void swapUsingXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n[Method 3: Bitwise XOR]");
    printf("\nAfter swap: a = %d, b = %d\n", a, b);
}

// Method 4: Using pointers (direct memory manipulation)
void swapUsingPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\n[Method 4: Pointer Manipulation]");
    printf("\nAfter swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values: a = %d, b = %d\n", a, b);

    swapUsingTemp(a, b);
    swapUsingArithmetic(a, b);
    swapUsingXOR(a, b);
    swapUsingPointers(&a, &b);  // This actually changes the original variables

    return 0;
}
