#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
              // Initialize the random number generator
    srand(time(0));
              // Generate a random number and assign it to n
    n = rand();
    
    if (n>0) {
        printf("%d is positive.\n");
    } else if (n<0) {
        printf("%d is negative.\n");
    } else {
        printf("%d is zero.\n");
    }

    return (0);
}
