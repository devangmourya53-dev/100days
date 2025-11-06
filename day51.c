/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <stdio.h>

// Function to find the first occurrence of target
int findFirst(int nums[], int n, int target) {
    int left = 0, right = n - 1, first = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            first = mid;
            right = mid - 1; // move left to find earlier occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of target
int findLast(int nums[], int n, int target) {
    int left = 0, right = n - 1, last = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            last = mid;
            left = mid + 1; // move right to find later occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    printf("%d %d\n", first, last);

    return 0;
}
