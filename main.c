#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

int main() {
   
    int array[] = {2, 3, 6, 4, 7};

    printf("\nArray: ");
    printArray(array, 5);
    printf("Sum: %d\n", sum(array, 5));
    printf("Mean: %.2f\n", mean(array, 5));
    printf("Variance: %.2f\n", variance(array, 5));
    printf("Standard Deviation: %.2f\n\n", standardDeviation(array, 5));

    return EXIT_SUCCESS;
}
