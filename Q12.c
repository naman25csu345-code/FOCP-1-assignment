#include <stdio.h>

int main() {
    int n, i;
    int scores[100];
    int max, min;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }


    max = min = scores[0];

    for (i = 1; i < n; i++) {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }

   
    printf("\nMaximum Score = %d\n", max);
    printf("Minimum Score = %d\n", min);

    return 0;
}
