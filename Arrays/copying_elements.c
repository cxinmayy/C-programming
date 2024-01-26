#include <stdio.h>

int main() {
    int array[100], array2[100];
    int i, n;
    printf("Enter the number of elements to be stored in array:\n");
    scanf("%d", &n);
    printf("Input the elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("The stored elements in array 1 are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    // Copying elements
    for (i = 0; i < n; i++) {
        array2[i] = array[i];
    }
    printf("The elements in array 2 are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array2[i]);
    }
    
    return 0; // Return 0 to indicate successful execution
}
