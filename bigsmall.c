#include <stdio.h>

void bigsmall() {
    int n, i;
    int max, min;

    // 1. Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Handle invalid array sizes
    if (n <= 0) {
        printf("Please enter a valid positive count.\n");
    }

    int arr[n];

    // 2. Read the elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Initialize max and min with the first element
    max = arr[0];
    min = arr[0];

    // 4. Loop through the rest of the array to update max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 5. Display the results
    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

   // ;
}
