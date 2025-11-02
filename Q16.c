#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element, choice;

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

    printf("\n\nEnter the element to insert: ");
    scanf("%d", &element);

   
    printf("Where do you want to insert?\n");
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
            pos = n;
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }
 for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

  
    arr[pos] = element;
    n++; 

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
