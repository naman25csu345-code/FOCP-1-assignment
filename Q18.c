#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int foundDuplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements: ");

    
    for (i = 0; i < n; i++) {
        int count = 0;

    
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                count = -1; 

        if (count == -1)
            continue; 
       
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

    
        if (count > 0) {
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate)
        printf("-1");

    printf("\n");
    return 0;
}
}