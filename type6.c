#include <stdio.h>

int main(void) {
    int l, i;
    int a[100];  // Array of size 100
    int key, found = 0;

    // Input the length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &l);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < l; i++) {
        scanf("%d", &a[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Search for the element in the array
    for (i = 0; i < l; i++) {
        if (a[i] == key) {
            found = 1;
            printf("Element %d found at position %d\n", key, i + 1);  // 1-based index
            break;  // Exit loop early since the element is found
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}