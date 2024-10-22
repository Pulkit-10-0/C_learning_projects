#include <stdio.h>

int main() {
    int a[20], i, n, max, min;

    // Prompt for number of elements
    printf("Enter the number of elements: ");  // Added printf to prompt user input
    scanf("%d", &n);  // Corrected scanf format string

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("Enter element [%d]: ", i + 1);  // Added prompt for each element
        scanf("%d", &a[i]);  // Read each element into the array
    }

    // Output array elements
    for (i = 0; i < n; i++) {
        printf("Element [%d]: %d\n", i + 1, a[i]);  // Print the elements with a proper format
    }

    // Initialize max and min with the first element
    max = a[0];
    min = a[0];

    // Find max and min values
    for (i = 0; i < n; i++) {  // Start from the second element
        if (a[i] > max) {
            max = a[i];  // Update max if current element is greater
        }
        if (a[i] < min) {
            min = a[i];  // Update min if current element is lesser
        }
    }

    // Output max and min values
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
