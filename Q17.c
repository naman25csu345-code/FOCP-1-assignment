#include <stdio.h>

int main() {
    int arr[100], n, i, pos, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nWhere do you want to delete an element?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            pos = 0; 
            break;

        case 2:
            pos = n / 2;
            break;

        case 3:
            pos = n - 1;  
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nElement deleted: %d\n", arr[pos]);

  
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

