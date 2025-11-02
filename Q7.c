#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nBinary Pyramid Pattern:\n\n");

    for (i = 1; i <= n; i++) {
       
        int bit = 0; 
        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit; 
        }

        printf(" "); 

     
        bit = 0;
        for (j = 1; j <= i; j++) {
            printf("%d", bit);
            bit = 1 - bit;
        }

        printf("\n");
    }

    return 0;
}
