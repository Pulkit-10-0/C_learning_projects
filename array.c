#include <stdio.h>

int main() {
    int i;
    int a[10];  // Define array size as 10
    for (i = 0; i < 3; i++) {  // Remove the semicolon here
        printf("Enter the number: [%d]",i+1);
        scanf("%d", &a[i]);  // Store the input in array
    }

    // Optionally, print the array to verify input
    for (i = 0; i < 3; i++) {
        printf("\n the element [%d] : %d",i+1,a[i]);
    }
    printf("\n");

    return 0;
}
