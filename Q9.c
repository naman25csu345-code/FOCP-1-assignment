#include <stdio.h>

int main() {
    int n, i, position = -1;
    int scores[100]; 
    printf("Enter number of scores: ");
    scanf("%d", &n);
    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            position = i;
            break; 
        }
    }

    
    if (position != -1)
        printf("\nThe first occurrence of 99 is at position: %d (index %d)\n", position + 1, position);
    else
        printf("\nScore 99 not found in the list.\n");

    return 0;
}
