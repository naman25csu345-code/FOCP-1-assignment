#include <stdio.h>

int main() {
    int a, b, hcf;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Make sure both numbers are positive
    if (a == 0 || b == 0) {
        printf("HCF is not defined for zero.\n");
        return 0;
    }

    // Euclidean Algorithm (Iterative)
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    printf("The HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}

