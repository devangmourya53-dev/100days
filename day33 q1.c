/*Search in a sorted array using binary search.
*/
#include <stdio.h>

int main() {
    int arr[100], n, i, search;
    int low, high, mid;
    int found = 0;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d elements (in ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Element %d found at position %d.\n", search, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element %d not found in the array.\n", search);

    return 0;
}
