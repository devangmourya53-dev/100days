/*Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find the correct position to insert the new element
    pos = n; // default position at the end
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
