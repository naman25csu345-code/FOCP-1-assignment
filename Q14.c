#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1)
        return 0; // 0 and 1 are not prime

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    int n, i, count = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrime numbers in the array:\n");
 
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\n\nTotal number of prime numbers: %d\n", count);

    return 0;
}
